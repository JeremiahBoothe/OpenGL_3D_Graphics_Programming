#pragma once
#include "ShaderCompiler.h"
#include <vector>
using namespace std;

/** Foundational class for all Shape Objects
* @param vector<float> vertices - the vertices of the object
* @param vector<unsigned int> indices - the indices of the vertices of the object
* @param const char* - vertex shader to be used with the object.
* @param const char* - fragment shader to be used with the object.
*/
class ShapeObject
{
public:

    ShapeObject(vector<float> vertices,
        vector<unsigned int> indices,
        const char* vertexShader,
        const char* fragmentShader);

    ShapeObject(vector<float> vertices);

    GLuint* getVaoPtr();
    GLuint getVao() const;
    GLuint getIbo() const;
    GLuint* getIboPtr();
    GLuint getVbo() const;
    GLuint* getVboPtr();
    GLuint getFbo() const;
    GLuint* getFboPtr();
    const char* getVertexShader();
    const char* getFragmentShader();
    vector<float> getVertices();
    vector<unsigned int> getIndices();
    void setShaderProgram(unsigned int shaderProgram);
    unsigned int getShaderProgram() const;
    unsigned int getTextureId();
    unsigned int* getTextureIdPtr();
    GLuint getDepthMap() const;
    GLuint* getDepthMapPtr();

    void setShadowDepthProgram(unsigned int shadowShaderDepthProgram);
    void setShadowMappingProgram(unsigned int shadowShaderMappingProgram);
    void setNormalVisualizer(unsigned int normalVisualizerProgram);
    void setEmissionsProgram(unsigned int emissionsProgram);

    unsigned int getShadowDepthProgram();

protected:
    const char* vertexShader;
    const char* fragmentShader;
    vector<float> vertices;
    vector<unsigned int> indices;
    unsigned int shaderProgram = {};
    unsigned int shadowShaderDepthProgram = {};
    unsigned int shadowShaderMappingProgram = {};
    unsigned int normalVisualizerProgram = {};
    unsigned int emissionsProgram = {};

    GLuint vbo[2];
    GLuint vao;
    GLuint ibo;
    GLuint fbo;
    GLuint uvBuffer;
    GLuint normalBuffer;
    GLuint tangentBuffer;
    GLuint bitangentBuffer;
    GLuint elementBuffer;
    GLuint TextureId;
    GLuint depthMap;

    //glm::mat4 scale;
    //glm::mat4 rotation;
    //glm::vec3 location;
    //glm::mat4 translation;
    //glm::mat4 model = translation * rotation * scale;
};