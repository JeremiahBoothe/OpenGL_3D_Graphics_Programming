#pragma once

struct Triangle {
    glm::vec3 p1, p2, p3;
};

/**
* Normalizes the normals to fall between 0 and 1.
* @param const glm::vec3& - vec3 vector to normalize
* @returns vec3 - normalized
*/
glm::vec3 normalizeToUnit(const glm::vec3& vec);


/**
* Calculates the normals over two triangles and calculates the cross product
* @param const glm::vec3& - vec3 vector to normalize
* @param const glm::vec3& - vec3 vector to normalize
* @param const glm::vec3& - vec3 vector to normalize
* @param const glm::vec3& - vec3 vector to normalize
* @returns vec3 - normalized
*/
glm::vec3 calculateEdgeNormal(const glm::vec3& p1, const glm::vec3& p2, const glm::vec3& p3, const glm::vec3& p4);


/**
* For speedier iteration and experimetation during shape creation, with this I can define the vertex points, the colors, texture, etc, separately, combine them, and then use indexing as  a means to redraw the whole vector into a new vector combined with colors fully iterating the shape as vertices for use in drawArray.
* @param vector<float> vecVerts - vertices for shape
* @param vector<float> vecColors - color Coordinates
* @param vector<unsigned int> indices - orderd to draw new vertices
* @param vector<float> vecTextures - texture Coordinates
* @param vector<float vecNormals - normals for appearance of depth
* @returns vector<float> - newly generated vector with combined vertices, colors, indices, textures, as needed.
*/
std::vector<float> buildCombinedVector(
	const std::vector<float> vecVerts,
	const std::vector<float> vecColors,
	const std::vector<unsigned int> indices,
	const std::vector<float> vecTextures,
	const std::vector<float> vecNormals);

/**
* For speedier iteration and experimetation during shape creation, with this I can define the vertex points, the colors, texture, etc, separately, combine them, and then use indexing as  a means to redraw the whole vector into a new vector combined with colors fully iterating the shape as vertices for use in drawArray.
* @param vector<float> vecVerts - vertices for shape
* @param vector<float vecNormals - normals for appearance of depth
* @returns vector<float> - newly generated vector with combined vertices, colors, indices, textures, as needed.
*/
std:: vector<float> buildCombinedVector(
	const std::vector<float> vecVerts,
	const std::vector<float> vecNormals);

/**
* For speedier iteration and experimetation during shape creation, with this I can define the vertex points, the colors, texture, etc, separately, combine them, and then use indexing as  a means to redraw the whole vector into a new vector combined with colors fully iterating the shape as vertices for use in drawArray.
* @param vector<float> vecVerts - vertices for shape
* @returns vector<float> - newly generated vector with combined vertices, colors, indices, textures, as needed.
*/
std::vector<float> buildCombinedVector(
	const std::vector<float>& tempVertices);

/**
* These next two functions work together to output the combined vector to a text base file in csv format with an f appended to each value. I've used it once for the focusrite interface, to collect the verticies put together in the vectors, and manually make some adjustments as needed.
* @param vector<float> tempVertices - the combined set of x,y,z, r, g, b, a, u, v, and normals.
* @param std::string& name - the name reference for each object (ie, presonus, focusrite, monitors, etc...)
* @returns bool - true for successful
*/
bool outputToFile(
	const std::vector<float> tempVertices,
	std::string& name);

/**
* This changes the file name if one exists, currently only works up to two different file names, and then just overwrites the 2nd again and again
* @param const std::string& - filename to build off of for streaming the CSV values to a text file.
* @returns std::string - the file name based on the object being output to a text file
*/
std::string generateNewFilename(
	const std::string& filename);



/**
* Attempt to create a function that normalizes data within a range, to allow real world measurments to be scaled between -1 and 1.
* @param - const std::vector<float>& data - vector of data to normalize
* @returns std::vector<float> - normalized vertice data
*/
std::vector<float> normalizeData(
	const std::vector<float>& data);

/**
* Another Attempt at creating a function that normalizes data within a range, to allow real world measurements to be scaled between -1 and 1
*/
void vectorNormalize();


/**
* Attempts to procedurally generate a circle.
* @param float radius - radius of circle to generate
* @param float int - points on the circle
* @returns nothing
*/
void buildCircle(
	float radius,
	int vCount);

/**
* Attempts to procedurally generate a circle.
* @param float radius - radius of circle to generate
* @param float int - points on the circle
* @returns nothing
*/
void buildCircle2(
	float radius,
	int vCount);