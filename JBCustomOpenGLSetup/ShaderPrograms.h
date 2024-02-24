#pragma once
using namespace std;

/**
* Creates a ShaderPrograms Type
* @params unsigned int - Compiled Shader Program
*/
class ShaderPrograms
{
public:
	ShaderPrograms(unsigned int shaderProgram);

	unsigned int getShaderProgram() const;

private:
	unsigned int shaderProgram{};
};
