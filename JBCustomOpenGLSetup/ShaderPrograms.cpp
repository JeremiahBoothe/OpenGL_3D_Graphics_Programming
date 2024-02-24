#include "ShaderPrograms.h"

ShaderPrograms::ShaderPrograms(unsigned int shaderProgram) :
	shaderProgram(shaderProgram)
{}

unsigned int ShaderPrograms::getShaderProgram() const
{
	return this->shaderProgram;
}

