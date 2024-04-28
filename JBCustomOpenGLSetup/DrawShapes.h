#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#define STB_IMAGE_IMPLEMENTATION
/* Internal Project .h files*/

#include "ShapeObject.h"
#include "MeshDimensions.h"
#include "ShaderCompiler.h"
#include "ShaderScripts.h"
#include "IndexBuffer.h"
#include "VertexBuffer.h"
#include "Lighting.h"
#include "Utilities.h"
#include "ShaderPrograms.h"
/* External Project Libraries */
#include <cstdlib> // EXIT_FAILURE
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <learnopengl/camera.h>
#include <stb_image.h>  
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstddef>

// Initialize Global Lighting SingleTon
Lighting* Lighting::lightingPtr
= new Lighting();

// Variables for window width and height
const char* const WINDOW_TITLE = "Jeremiah Boothe";
const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;

// Main GLFW window
GLFWwindow* window = nullptr;

// Camera Controls
Camera camera(glm::vec3(0.0f, 3.0f, 10.0f));
float lastX = WINDOW_WIDTH / 2.0f;
float lastY = WINDOW_HEIGHT / 2.0f;

// Mouse Controls
bool firstMouse = true;
bool pKeyPressed = false;

// Global TextureId and uvScale
GLuint TextureId;
glm::vec2 uvScale(1.0f, 1.0f);

// Timing for movement controls
float gDeltaTime = 0.0f;
float gLastFrame = 0.0f;

// Lamp animation
bool gIsLampOrbiting = false;
glm::vec3 gLightPosition(4.5f, 5.5f, 10.0f);

glm::vec3 gLightScale(.5f);
/* Aliased maps to hold shape objects, uses unique_ptr to reference the object */
using Shapes = std::map<std::string, std::unique_ptr<ShapeObject>>;

/* Aliased map to hold compiled shaders, uses unique_ptr to reference the shader */
using ShaderCollection = std::map<std::string, std::unique_ptr<ShaderPrograms>>;

/**
* Takes input arguments from keyboard and mouse.
*/
int main(int argc, char* argv[]);

/**
* Generates the texture
* @param const char* - the path/name to the file
* @param GLuint& textureId - Id of texture
* @param Shapes& ShapeMap - map of created Shapes
* @returns bool
*/
bool UCreateTexture(
	const char* filename, 
	GLuint& textureId, 
	Shapes& ShapeMap, 
	std::string name);

/**
* Precompiles shaders and places them in a map to avoid recompiling and make it easier to swap between shaders
* @param ShaderCollection& - the map to be used to hold the collection of compiled shaders.
* @returns nothing
*/
void createShaders(
	ShaderCollection& shaderCollection);

/**
* Builds the objects
* @param Shapes - Shape map that shapes are placed into
* @returns - nothing
*/
void BuildShapes(
	Shapes& ShapeMap, ShaderCollection& shaderCollection);

/**
* Creates unique pointers to shape objects and places them in the map.
* @param string - reference name of object being created.
* @param vector<float> - vectors of vertices of object.
* @param Shapes - Shape Map passed by reference.
* @param vector<std::string> - faces for cube map
* @param GLuint - Texture Id used for ShapeObject
* @returns nothing
*/
void UCreateShape(
	std::string name,
	Shapes& ShapeMap,
	vector<float> vertices,
	vector<std::string> faces,
	GLuint textureId,
	ShaderCollection& shaderCollection);

/**
* Creates unique pointers to shape objects and places them in the map.
* @param string - reference name of object being created.
* @param Shapes - Shape Map passed by reference.
* @param vector<float> - vectors of vertices of object.
* @param const char* - texture location for individual textures
* @param GLuint - Texture Id used for ShapeObject
* @returns nothing
*/
void UCreateShape(
	std::string name,
	Shapes& ShapeMap,
	vector<float> vertices,
	const char* filename,
	GLuint textureId,
	ShaderCollection& shaderCollection);

/**
* Binds and renders shapes from the ShapeMap.
* @param Shapes - Aliased ShapeMap
* @param GLFWwindow* - points to the window the shapes are to be rendered in.
* @param Lighting* - global lighting singleton to manage changes of lighting as shader programs are swapped out.
* @returns nothing
*/
void URenderShape(
	Shapes& ShapeMap,
	GLFWwindow* window,
	ShaderCollection& shaderCollection,
	Lighting* globalLighting);

/**
* Generates the textures for the CubeMap
* @param vector<std::string> - the string vector of faces to load 
* @param GLuint& - TextureId for the textures
* @param Shapes& - ShapeMap
* @param std::string - name of CubeMap
* @returns bool
*/
bool loadCubemap(vector<std::string> faces,
	GLuint TextureID,
	Shapes& ShapeMap,
	std::string name);

/** not yet implemented**/
void flipImageVertically(
	unsigned char* image,
	int width,
	int height,
	int channels);

/**
* Initializes Window.
* @param int -
* @param char* [] -
* @param GLFWwindow** - window
* @returns bool - true if initialized
*/
bool UInitialize(
	int,
	char* [],
	GLFWwindow** window);

/**
* Resize window capabilities.
* @param GLFWwindow* - window pointer
* @param int width - pick your width
* @param int height - pick your height
* @returns nothing
*/
void UResizeWindow(
	GLFWwindow* window,
	int width,
	int height);

/**
* Processes user input to window
* @param GLFWwindow* - window
* @returns nothing
*/
void UProcessInput(
	GLFWwindow* window);

/**
* Mouse Position Callback to read the changes in mouse position
* @param GLFWwindow* - window
* @param double - x position of mouse
* @param double - y position of mouse
* @returns nothing
*/
void UMousePositionCallback(
	GLFWwindow* window,
	double xpos,
	double ypos);

/**
* Mouse Scroll Callback reads scrolling of the mouse.
* @param GLFWwindow* - window
* @param double - x offset of scroll
* @param double - y offset of scroll
* @returns nothing
*/
void UMouseScrollCallback(
	GLFWwindow* window,
	double xoffset,
	double yoffset);

/**
* Mouse Button Callback reads clicks of mouse
* @param GLFWwindow* window - window
* @param int - button activated
* @param int - action that occured
* @param int - mods??
*/
void UMouseButtonCallback(
	GLFWwindow* window,
	int button,
	int action,
	int mods);