#pragma once
#include <iostream>
#include <memory>
#include <glm/glm.hpp>
#include <GL/glew.h>
using namespace std;

/* Creates and Compiles Shader Programs */
namespace runShader 
{
	/**
	* Compiler function for the shaders, handles both vertex and fragment shader.
	* @param unsigned int - determines type of shader
	* @param const std::string& - the source data of the shader
	* @returns unsigned int - id of shader program
	*/
	unsigned int CompileShader(unsigned int type, const std::string& source);

	/**
	* creates the shader from the defined vertexShader and fragmentShader scripts.
	* @param const std::string& - vertexShader script passed by reference
	* @param const std::string& - fragmentShader script passed by reference
	* @returns unsigned int - the shader program to run with glUseProgram().
	*/
	unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader);
}