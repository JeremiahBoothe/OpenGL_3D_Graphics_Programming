#include <vector>
#include <glm/glm.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstddef>
#include "Utilities.h"

/**************** For Experimental BuildCircle and Normalization functions ****/
std::vector<float> C1vertices;
std::vector<unsigned int> C1indices;
std::vector<unsigned int> Cindices;
std::vector<float> C2vertices;
std::vector<unsigned int> C2indices;
std::vector<unsigned int> C2ndices;


glm::vec3 normalizeToUnit(
    const glm::vec3& vec)
{
    float length = glm::length(vec);
    if (length == 0.0f) {
        return vec; // Avoid division by zero
    }
    return vec / length;
}

glm::vec3 calculateEdgeNormal(
    const glm::vec3& p1,
    const glm::vec3& p2,
    const glm::vec3& p3,
    const glm::vec3& p4)
{
    glm::vec3 normal1 = glm::cross(p2 - p1, p3 - p1);
    glm::vec3 normal2 = glm::cross(p3 - p1, p4 - p1);

    // Average the normals
    glm::vec3 edgeNormal = (normal1 + normal2) / 2.0f;

    return normalizeToUnit(edgeNormal);
}

std::vector<float> buildCombinedVector(
    const std::vector<float>& tempVertices)
{
    std::vector<float> normals;

    // Assuming each vertex has 3 coordinates (x, y, z)
    for (unsigned int i = 0U; i < tempVertices.size(); i += 12U) { // Assuming each triangle is represented by 3 vertices
        // Construct two triangles from the vertices
        Triangle triangle1{
            glm::vec3(tempVertices[i], tempVertices[i + 1], tempVertices[i + 2]),
            glm::vec3(tempVertices[i + 12], tempVertices[i + 13], tempVertices[i + 14]),
            glm::vec3(tempVertices[i + 24], tempVertices[i + 25], tempVertices[i + 26])
        };

        Triangle triangle2{
            glm::vec3(tempVertices[i + 24], tempVertices[i + 25], tempVertices[i + 26]),
            glm::vec3(tempVertices[i + 36], tempVertices[i + 37], tempVertices[i + 38]),
            glm::vec3(tempVertices[i], tempVertices[i + 1], tempVertices[i + 2]),
        };

        // Calculate the normal across two triangles sharing an edge and normalize it
        glm::vec3 normal = calculateEdgeNormal(triangle1.p1, triangle1.p2, triangle1.p3, triangle2.p3);

        // Append the normalized normal components to the normals vector
        normals.push_back(std::fabs(normal.x));
        normals.push_back(std::fabs(normal.y));
        normals.push_back(std::fabs(normal.z));
    };

    std::string name = "normals";
    outputToFile(normals, name);
    return normals;
}

std::vector<float> buildCombinedVector(
    const std::vector<float> vecVerts,
    const std::vector<float> vecColors,
    const std::vector<unsigned int> indices,
    const std::vector<float> vecTextures,
    const std::vector<float> vecNormals)
{
    std::vector<float> tempVertices;
    std::vector<float> drawVertices;

    unsigned int vecvertSize = static_cast<unsigned int>(vecVerts.end() - vecVerts.begin());
    unsigned int veccolorSize = static_cast<unsigned int>(vecColors.end() - vecColors.begin());
    unsigned int vectextSize = static_cast<unsigned int>(vecTextures.end() - vecTextures.begin());
    unsigned int vecnormSize = static_cast<unsigned int>(vecVerts.end() - vecVerts.begin());
    unsigned int totalSize = (vecvertSize + veccolorSize + vectextSize + vecnormSize);

    tempVertices.reserve(totalSize);

    unsigned int p1_index = 0U;
    unsigned int p2_index = 0U;
    unsigned int p3_index = 0U;
    unsigned int p4_index = 0U;

    for (unsigned int i = 0U; i < totalSize; i += 12U)
    {
        tempVertices.push_back(vecVerts[p1_index]);
        tempVertices.push_back(vecVerts[p1_index + 1]);
        tempVertices.push_back(vecVerts[p1_index + 2]);
        tempVertices.push_back(vecColors[p2_index]);
        tempVertices.push_back(vecColors[p2_index + 1]);
        tempVertices.push_back(vecColors[p2_index + 2]);
        tempVertices.push_back(vecColors[p2_index + 3]);
        tempVertices.push_back(vecTextures[p3_index]);
        tempVertices.push_back(vecTextures[p3_index + 1]);
        tempVertices.push_back(vecNormals[0]);
        tempVertices.push_back(vecNormals[1]);
        tempVertices.push_back(vecNormals[2]);

        p1_index += 3U;
        p2_index += 4U;
        p3_index += 2U;
        p4_index += 3U;
    }

    unsigned int tempDrawVertSize = static_cast<unsigned int>(indices.end() - indices.begin()) * 12U;

    drawVertices.reserve(tempDrawVertSize);

    for (unsigned int j = 0; j < (indices.end() - indices.begin()); j++)
    {
        unsigned int index = indices[j]; // Assuming 'indices' is another vector containing indices

        drawVertices.push_back(tempVertices[index * 12]);
        drawVertices.push_back(tempVertices[(index * 12) + 1]);
        drawVertices.push_back(tempVertices[(index * 12) + 2]);
        drawVertices.push_back(tempVertices[(index * 12) + 3]);
        drawVertices.push_back(tempVertices[(index * 12) + 4]);
        drawVertices.push_back(tempVertices[(index * 12) + 5]);
        drawVertices.push_back(tempVertices[(index * 12) + 6]);
        drawVertices.push_back(tempVertices[(index * 12) + 7]);
        drawVertices.push_back(tempVertices[(index * 12) + 8]);
        drawVertices.push_back(tempVertices[(index * 12) + 9]);
        drawVertices.push_back(tempVertices[(index * 12) + 10]);
        drawVertices.push_back(tempVertices[(index * 12) + 11]);
    };

    return drawVertices;
};

std::vector<float> buildCombinedVector(
    const std::vector<float> vecVerts,
    const std::vector<float> vecNormals)
{
    unsigned int totalSize = static_cast<unsigned int>(vecVerts.end() - vecVerts.begin());

    std::vector<float> newCombo;
    newCombo.reserve(totalSize);

    unsigned int p1_index = 0U;
    unsigned int p2_index = 0U;

    for (unsigned int i = 0U; i < totalSize; i += 12U)
    {
        newCombo.push_back(vecVerts[p1_index]);
        newCombo.push_back(vecVerts[p1_index + 1]);
        newCombo.push_back(vecVerts[p1_index + 2]);
        newCombo.push_back(vecVerts[p1_index + 3]);
        newCombo.push_back(vecVerts[p1_index + 4]);
        newCombo.push_back(vecVerts[p1_index + 5]);
        newCombo.push_back(vecVerts[p1_index + 6]);
        newCombo.push_back(vecVerts[p1_index + 7]);
        newCombo.push_back(vecVerts[p1_index + 8]);
        newCombo.push_back(vecNormals[p2_index]);
        newCombo.push_back(vecNormals[p2_index + 1]);
        newCombo.push_back(vecNormals[p2_index + 2]);

        p1_index += 12U;
        p2_index += 3U;
    }
    std::string name = "appendedNormals";
    outputToFile(newCombo, name);

    return newCombo;
};

bool outputToFile(
    std::vector<float> tempVertices,
    std::string& name)
{
    std::string filename = generateNewFilename(name);
    // Output folder
    std::string folder = "outputfiles/";
    // Filename
    filename = folder + filename + ".txt";

    // Check if the file already exists
    std::ifstream fileExists(filename);
    if (fileExists.is_open()) {
        fileExists.close();
        // Generate a new filename
        filename = generateNewFilename(filename);
    }

    // Open the file for writing
    std::ofstream outFile(filename);

    // Check if the file is opened successfully
    if (!outFile) {
        std::cerr << "Error opening file!" << std::endl;
        return false;
    }

    // Set precision for float output
    outFile << std::fixed << std::setprecision(2);

    // Counter for number of entries written
    int entryCount = 0;

    // Iterate over the vector and print each float followed by an 'f'
    for (size_t i = 0; i < tempVertices.size(); ++i) {
        if (tempVertices[i] == static_cast<int>(tempVertices[i])) {
            outFile << std::setprecision(3) << std::setw(3) << std::setfill('0') << tempVertices[i] << "f";
        }
        else {
            outFile << tempVertices[i] << "f";
        }

        // Increment entry count
        entryCount++;

        // Add comma and new line every 11 entries
        if (entryCount % 12 == 0 && i != tempVertices.size() - 1) {
            outFile << ",\n";
        }
        else if (i != tempVertices.size() - 1) {
            outFile << ",";
        }
    }

    // Close the file
    outFile.close();

    std::cout << "File has been written successfully." << std::endl;
}

std::string generateNewFilename(
    const std::string& filename)
{
    std::stringstream newFilename;
    size_t dotPos = filename.find_last_of('.');
    if (dotPos != std::string::npos) {
        newFilename << filename.substr(0, dotPos) << "_new" << filename.substr(dotPos);
    }
    else {
        newFilename << filename << "_new";
    }
    return newFilename.str();
}

std::vector<float> normalizeData(
    const std::vector<float>& data)
{
    // Find the minimum and maximum values in the data
    float minVal = *std::min_element(data.begin(), data.end());
    float maxVal = *std::max_element(data.begin(), data.end());

    // Calculate the range
    float range = maxVal - minVal;

    // Initialize the normalized data vector
    std::vector<float> normalizedData;

    // Normalize each element in the data
    for (float value : data) {
        float normalizedValue = 2.0f * ((value - minVal) / range) - 1.0f;
        normalizedData.push_back(normalizedValue);
    }
    return normalizedData;
}

void vectorNormalize()
{
    std::vector<float> inputData = { 6.8750f, 0.5f, 0.25f, 0.125f, 0.0416f, 0.0f };

    std::cout << "Original Data:" << std::endl;
    for (float value : C1vertices)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::vector<float> normalizedData = normalizeData(C1vertices);

    std::cout << "Normalized Data:" << std::endl;
    for (float value : normalizedData)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    //system("pause");
}

void buildCircle(
    float radius,
    int vCount)
{
    float angle = 360.0f / vCount;

    int triangleCount = vCount - 5;

    // positions
    for (int i = 0; i < vCount; i++)
    {
        float currentAngle = angle * i;
        float x = radius * cos(glm::radians(currentAngle));
        float y = radius * sin(glm::radians(currentAngle));
        float z = 0.0f;

        C1vertices.push_back(x);
        C1vertices.push_back(y);
        C1vertices.push_back(z);
        C1vertices.push_back(0.20f);
        C1vertices.push_back(0.23f);
        C1vertices.push_back(0.63f);
        C1vertices.push_back(1.0f);
        C1vertices.push_back(x);
        C1vertices.push_back(y);
        C1vertices.push_back(0.20f);
        C1vertices.push_back(0.23f);
        C1vertices.push_back(0.63f);
        C1vertices.push_back(1.0f);
    }

    // push indexes of each triangle point
    for (int i = 0; i < triangleCount; i++)
    {
        C1indices.push_back(i);
        C1indices.push_back(i + 1);
    }
};

void buildCircle2(
    float radius,
    int vCount)
{
    float angle = 360.0f / vCount;

    int triangleCount = vCount - 2;

    for (int i = 0; i < vCount; i++)
    {
        float currentAngle = angle * i;
        float x = radius * cos(glm::radians(currentAngle));
        float y = radius * sin(glm::radians(currentAngle));
        float z = 0.2f;

        C2vertices.push_back(x);
        C2vertices.push_back(y);
        C2vertices.push_back(z);
        C2vertices.push_back(0.20f);
        C2vertices.push_back(0.23f);
        C2vertices.push_back(0.63f);
        C2vertices.push_back(1.0f);
    }

    // push indexes of each triangle point
    for (int i = 0; i < triangleCount; i++)
    {
        C2indices.push_back(0);
        C2indices.push_back(i + 1);
        C2indices.push_back(i + 2);
    }
}