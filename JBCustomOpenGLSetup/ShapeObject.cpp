#include "Shapeobject.h"

ShapeObject::ShapeObject(
    vector<float> vertices,
    vector<unsigned int> indices,
    const char* vertexShader,
    const char* fragmentShader) :
    vao(),
    ibo(),
    vbo(),
    fbo(),
    depthMap(),
    uvBuffer(),
    normalBuffer(),
    tangentBuffer(),
    bitangentBuffer(),
    elementBuffer(),
    vertexShader(vertexShader),
    fragmentShader(fragmentShader),
    shaderProgram(),
    indices(indices),
    vertices(vertices),
    TextureId() {}

ShapeObject::ShapeObject(vector<float> vertices) :
    indices(),
    vertexShader(),
    fragmentShader(),
    vao(),
    ibo(),
    vbo(),
    fbo(),
    depthMap(),
    uvBuffer(),
    normalBuffer(),
    tangentBuffer(),
    bitangentBuffer(),
    elementBuffer(),
    shaderProgram(),
    vertices(vertices),
    TextureId()
{}

GLuint* ShapeObject::getVaoPtr()
{
    return &vao;
}

GLuint ShapeObject::getVao() const
{
    return vao;
}

GLuint* ShapeObject::getIboPtr()
{
    return &vbo[0];
}

GLuint ShapeObject::getIbo() const
{
    return vbo[1];
}

GLuint* ShapeObject::getVboPtr()
{
    return &vbo[0];
}

GLuint ShapeObject::getFbo() const
{
    return fbo;
}

GLuint* ShapeObject::getFboPtr()
{
    return &fbo;
}

GLuint ShapeObject::getVbo() const
{
    return vbo[0];
}

const char* ShapeObject::getVertexShader()
{
    return this->vertexShader;
}

const char* ShapeObject::getFragmentShader()
{
    return this->fragmentShader;
}

vector<float> ShapeObject::getVertices()
{
    return vertices;
}

vector<unsigned int> ShapeObject::getIndices()
{

    return indices;
}

void ShapeObject::setShaderProgram(unsigned int shaderProgram)
{
    this->shaderProgram = shaderProgram;
}

unsigned int ShapeObject::getShaderProgram() const
{
    return this->shaderProgram;
}

unsigned int ShapeObject::getTextureId()
{
    return TextureId;
}

unsigned int* ShapeObject::getTextureIdPtr()
{
    return &TextureId;
}

GLuint ShapeObject::getDepthMap() const
{
    return depthMap;
}

GLuint* ShapeObject::getDepthMapPtr()
{
    return &depthMap;
}

void ShapeObject::setShadowDepthProgram(unsigned int shadowShaderDepthProgram)
{
    this->shadowShaderDepthProgram = shadowShaderDepthProgram;
}

void ShapeObject::setShadowMappingProgram(unsigned int shadowShaderMappingProgram)
{
    this->shadowShaderMappingProgram = shadowShaderMappingProgram;
}

void ShapeObject::setNormalVisualizer(unsigned int normalVisualizerProgram)
{
    this->normalVisualizerProgram = normalVisualizerProgram;
}

void ShapeObject::setEmissionsProgram(unsigned int emissionsProgram)
{
    this->emissionsProgram = emissionsProgram;
}

unsigned int ShapeObject::getShadowDepthProgram()
{
    return this->shadowShaderDepthProgram;
}
