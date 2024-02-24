#pragma once
#include <vector>
#include <array>

/* List of textures used in project */
struct Textures
{
	const char* tableTexture = "textures/tables/texture.png";
	const char* tableTexture2 = "textures/tables/tableTexture2.png";
	const char* tableTexture3 = "textures/tables/tabletexture4.png";
	const char* tableTexture4 = "textures/tables/tabletexture5.png";
	const char* faderportmap = "textures/faderport/faderportmap.png";
	const char* rightspeakermap = "textures/speakers/rightspeakermap.png";
	const char* leftspeakermap = "textures/speakers/leftspeakermap.png";
	const char* monitor1 = "textures/monitors/monitor1a.png";
	const char* monitor2 = "textures/monitors/monitor2a.png";
	const char* keyboard = "textures/keyboard/keyboard.png";
	const char* speakerFaceNormal = "textures/speakers/rightfrontspeakertexture_NRM.png";
	const char* focusriteMap = "textures/focusrite/focusriteMap.png";
	const char* chromeSwirl = "textures/chromeSwirl.jpg";
	const char* darkSwirl = "textures/darkSwirl.jpg";
	const char* mousepad = "textures/mousepad/mousepad.png";
	const char* brickLight = "textures/jbbricktexture.png";

	/* SkyBox Faces */
	vector<std::string> faces
	{		
		"textures/skybox/nright.jpg",
		"textures/skybox/nleft.jpg",
		"textures/skybox/ntop.jpg",
		"textures/skybox/nbottom.jpg",
		"textures/skybox/nfront.jpg",
		"textures/skybox/nback.jpg"
	};
} texturesStruct;

struct 
{
	vector<float> cubeVertices
	{
		// positions          // normals
 -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
		 0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
		-0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

		-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f
	};

	vector<float> skyboxVertices 
	{
		// positions          
		-1.0f,  1.0f, -1.0f,
		-1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,

		 1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		-1.0f, -1.0f, -1.0f,

		-1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f,  1.0f,
		-1.0f, -1.0f,  1.0f,

		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		
		 1.0f,  1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		-1.0f,  1.0f,  1.0f,
		 
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f, -1.0f,  1.0f,
		-1.0f, -1.0f,  1.0f,

		-1.0f,  1.0f, -1.0f,
		 1.0f,  1.0f, -1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		
		-1.0f,  1.0f,  1.0f,
		-1.0f,  1.0f, -1.0f,
		-1.0f, -1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		 
		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		 1.0f, -1.0f,  1.0f
	};
} SkyBox;

struct 
{

	
vector<float> sliderImproved{
		// front
-1.00f, -1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left corner a
-1.00f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,	// front top left corner a
-0.75f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner a
-1.00f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner a
-0.75f,	 1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner a
-0.75f, -1.0f,  1.0f, 		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom right corner a

-0.75f, -1.0f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner b
-0.75f,  0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top left corner b
-0.50f,  0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner b
-0.75f,	-1.0f,   1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner b
-0.50f,  0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner b
-0.50f, -1.0f,   1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom right corner b

-0.50f, -1.000f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner c
-0.50f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top left corner c
-0.25f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner c
-0.50f,	-1.000f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner c
-0.25f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner c
-0.25f, -1.000f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom right corner c

-0.25f, -1.0f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner d
-0.25f,  0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top left corner d
 0.25f,  0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner d
-0.25f,	-1.0f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner d
 0.25f,  0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner d
 0.25f, -1.0f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom right corner d

0.25f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner e
0.25f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top left corner e
0.50f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner e
0.25f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom left corner e
0.50f,  0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // front top right corner e
0.50f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // front bottom right corner e

0.50f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.50f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.75f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.50f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.75f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.75f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner

0.75f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.75f,  1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
1.00f,  1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
0.75f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
1.00f,  1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,   // back top right corner
1.00f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,   // back top right corner

// back
-1.00f, -1.0f,  -1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// front bottom left corner a
-1.00f,  1.0f,  -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,	// front top left corner a
-0.75f,  1.0f,  -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner a
-1.00f, -1.0f,  -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner a
-0.75f,	 1.0f,  -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner a
-0.75f, -1.0f,  -1.0f, 		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom right corner a

-0.75f, -1.0f,   -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner b
-0.75f,  0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top left corner b
-0.50f,  0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner b
-0.75f,	-1.0f,   -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner b
-0.50f,  0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner b
-0.50f, -1.0f,   -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom right corner b

-0.50f, -1.000f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner c
-0.50f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top left corner c
-0.25f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner c
-0.50f,	-1.000f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner c
-0.25f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner c
-0.25f, -1.000f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom right corner c

-0.25f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner d
-0.25f,  0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top left corner d
 0.25f,  0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner d
-0.25f,	-1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner d
 0.25f,  0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner d
 0.25f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom right corner d

0.25f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner e
0.25f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top left corner e
0.50f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner e
0.25f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom left corner e
0.50f,  0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // front top right corner e
0.50f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // front bottom right corner e

0.50f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.50f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.75f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner

0.75f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.75f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
1.00f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
0.75f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
1.00f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,   // back top right corner
1.00f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, -1.0f,   // back top right corner

-1.00f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,	// front top left corner a
-1.00f, 1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,	// back top left corner a
-0.75f, 1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner a
-1.00f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front top right corner a
-0.75f, 1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner a
-0.75f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front top right corner a

-0.75f, 0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner b
-0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top left corner b
-0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner b
-0.75f, 0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner b
-0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner b
-0.50f, 0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom right corner b

-0.50f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner c
-0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top left corner c
-0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner c
-0.50f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner c
-0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner c
-0.25f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom right corner c

-0.25f, 0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner d
-0.25f, 0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top left corner d
0.25f,  0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner d
-0.25f, 0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner d
0.25f,  0.25f,  -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner d
0.25f,  0.25f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom right corner d

0.25f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner e
0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top left corner e
0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner e
0.25f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom left corner e
0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // front top right corner e
0.50f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // front bottom right corner e

0.50f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.50f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.75f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner

0.75f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.75f, 1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
1.00f, 1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
0.75f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
1.00f, 1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 1.0f, 0.0f,   // back top right corner
1.00f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 1.0f, 0.0f,   // back top right corner

-0.75f, 1.0f,    1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.75f, 1.0f,   -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // front top right corner a
-0.75f, 1.0f,    1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.75f, 0.75f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a

-0.50f, 0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // front top right corner a
-0.50f, 0.75f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.50f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a

-0.25f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.25f, 0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // front top right corner a
-0.25f, 0.45f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.25f, 0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
-0.25f, 0.25f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a

0.25f, 0.25f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.25f, 0.25f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // front top right corner a
0.25f, 0.25f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.25f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.25f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a

0.50f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.50f, 0.45f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // front top right corner a
0.50f, 0.45f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.50f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.50f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a

0.75f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.75f, 1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // front top right corner a
0.75f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.75f, 0.75f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
0.75f, 0.75f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a

-1.0f,  -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a
-1.0f,  -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a
-1.0f,	-1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a
1.0f, -1.0f,	-1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a
1.0f, -1.0f,	1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			0.0f, 0.0f, -1.0f,    // back top right corner a

-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,		    -1.0f, 0.0f, 0.0f,    // back top right corner a
-1.0f,	1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
-1.0f,  1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a
-1.0f,  -1.0f, 1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			-1.0f, 0.0f, 0.0f,    // back top right corner a

1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
1.0f, 1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
1.0f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
1.0f, 1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 1.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a
1.0f, -1.0f, 1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f, 0.0f,			1.0f, 0.0f, 0.0f,    // back top right corner a

};

	vector<float> basicCubeObjects2{
		/*** X **** Y **** Z ********** R **** G **** B **** A ******** U **** V *********  Normals */
// Top
-1.00f, 1.00f, 1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top left corner
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 1.0f, 0.0f,	// back top left corner
 1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 1.0f, 0.0f,   // back top right corner
-1.0f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top left corner
 1.0f,  1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top right corner
 1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 1.0f,		0.0f, 1.0f, 0.0f,	// back top right corner

 // left
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// front bottom left corner
-1.0f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// front top left corner
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,// back top left corner
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// front bottom left
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,// back top left corner
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// back bottom left corner

// bottom
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom left
-1.0f, -1.0f, -1.0f, 		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// back bottom left
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// back bottom  right
-1.0f, -1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom left
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom right
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,  // back bottom right

//back
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom left
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back top left
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back top right
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom left
 1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back top right

// front
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left
-1.0f,  1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front top left
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front top right
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,  // front top right
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom right

// right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		1.0f, 0.0f, 0.0f,	// back top right
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		1.0f, 0.0f, 0.0f,  // back bottom right  
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		1.0f, 0.0f, 0.0f,	   // front bottom right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		1.0f, 0.0f, 0.0f,	   // back top right
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,     0.0f,  0.0f,		1.0f, 0.0f, 0.0f,      // front top right
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		1.0f, 0.0f, 0.0f,  // front bottom right

	
	};

	vector<float> basicCubeObjects{
		/*** X **** Y **** Z ********** R **** G **** B **** A ******** U **** V *********  Normals */
// Top
-1.00f, 1.00f, 1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top left corner
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 1.0f, 0.0f,	// back top left corner
 1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 1.0f, 0.0f,   // back top right corner
-1.0f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top left corner
 1.0f,  1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 1.0f, 0.0f,	// front top right corner
 1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 1.0f,		0.0f, 1.0f, 0.0f,	// back top right corner

 // left
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// front bottom left corner
-1.0f,  1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		-1.0f, 0.0f, 0.0f,	// front top left corner
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		-1.0f, 0.0f, 0.0f,// back top left corner
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		-1.0f, 0.0f, 0.0f,	// front bottom left
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		-1.0f, 0.0f, 0.0f,// back top left corner
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		-1.0f, 0.0f, 0.0f,	// back bottom left corner

// bottom
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom left
-1.0f, -1.0f, -1.0f, 		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, -1.0f, 0.0f,	// back bottom left
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, -1.0f, 0.0f,	// back bottom  right
-1.0f, -1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom left
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, -1.0f, 0.0f,	// front bottom right
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, -1.0f, 0.0f,  // back bottom right

 //back
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom left
-1.0f,  1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, -1.0f,	// back top left
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,	// back top right
-1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom left
 1.0f, -1.0f, -1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    1.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// back bottom right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, -1.0f,	// back top right

 // front
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left
-1.0f,  1.0f,  1.0f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  1.0f,		0.0f, 0.0f, 1.0f,	// front top left
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,	// front top right
-1.0f, -1.0f,  1.0f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,  // front top right
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		0.0f, 0.0f, 1.0f,	// front bottom right

 // right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		0.0f,  0.0f,		1.0f, 0.0f, 0.0f,	// back top right
1.0f, -1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  1.0f,		1.0f, 0.0f, 0.0f,  // back bottom right  
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    1.0f,  1.0f,		1.0f, 0.0f, 0.0f,	   // front bottom right
1.0f,  1.0f, -1.0f,			0.49f, 0.01f, 0.13f, 1.00f,	    0.0f,  0.0f,		1.0f, 0.0f, 0.0f,	   // back top right
1.0f,  1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,     1.0f,  0.0f,		1.0f, 0.0f, 0.0f,      // front top right
1.0f, -1.0f,  1.0f,			0.49f, 0.01f, 0.13f, 1.00f,		1.0f,  1.0f,		1.0f, 0.0f, 0.0f,  // front bottom right
	};

	vector<float> vertices
	{
		-1.0f, -1.0f, -1.0f,    // 0 back bottom left
		-1.0f,  1.0f, -1.0f,    // 1 back top left
		 1.0f,  1.0f, -1.0f,	// 2 back top right
		 1.0f, -1.0f, -1.0f,	// 3 back bottom right

		-1.0f, -1.0f,  1.0f,    // 4 front bottom left
		-1.0f,  1.0f,  1.0f,	// 5 front top left
		 1.0f,  1.0f,  1.0f,    // 6 front top right
		 1.0f, -1.0f,  1.0f,	// 7 front bottom right
	};

	vector<float> colors
	{
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f
	};


	vector<float> colorsRed
	{
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
		
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
		0.49f, 0.01f, 0.13f, 1.0f,
	};

	vector<float> colorsSteelBlack
	{
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
		0.34f, 0.41f, 0.48f, 1.0f,
	};

	vector<float> colorsAlpha
	{
		/**Presonus device back*/
		0.27f, 0.31f, 0.33f, 0.0f,    // 0 back bottom left
		0.27f, 0.31f, 0.33f, 0.0f,    // 1 back upper left
		0.27f, 0.31f, 0.33f, 0.0f,    // 2 back upper right
		0.27f, 0.31f, 0.33f, 0.0f,    // 3 back bottom right

		0.54f, 0.55f, 0.54f, 0.0f,    // 4 front bottom left
		0.54f, 0.55f, 0.54f, 0.0f,    // 5 front upper left
		0.54f, 0.55f, 0.54f, 0.0f,    // 6 front upper right
		0.54f, 0.55f, 0.54f, 0.0f,    // 7 front bottom right
	};

	vector<float> normals{
	0.20f, 0.27f, 1.0f
	};

	vector<float> textureVertices
	{
		0.0f, 1.0f,		// bottom left
		0.0f, 1.0f,		// top left
		1.0f, 1.0f,		// top right
		1.0f, 1.0f,     // bottom right

		0.0f, 0.0f,     // bottom left
		0.0f, 0.0f,		// top left
		1.0f, 0.0f,		// top right
		1.0f, 0.0f,		// bottom right
	};

	vector<float> focusriteVertices 
	{ /*** X **** Y **** Z ********** R **** G **** B **** A ******** U **** V *********  Normals */
		// Top
		-1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top left corner
		-1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		0.0f, 1.0f, 0.0f,	// back top left corner
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 1.0f, 0.0f,   // back top right corner
		-1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top left corner
		 1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top right corner
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 1.0f, 0.0f,	// back top right corner

		 // left
		-1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.333f,		-1.0f, 0.0f, 0.0f,	// front bottom left corner
		-1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.666f,		-1.0f, 0.0f, 0.0f,	// front top left corner
	    -1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		-1.0f, 0.0f, 0.0f,// back top left corner
		-1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.333f,		-1.0f, 0.0f, 0.0f,	// front bottom left
		-1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		-1.0f, 0.0f, 0.0f,// back top left corner
		-1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		-1.0f, 0.0f, 0.0f,	// back bottom left corner
		
		// bottom
		-1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom left
		-1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		0.0f, -1.0f, 0.0f,	// back bottom left
		 1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.333f,		0.0f, -1.0f, 0.0f,	// back bottom  right
		-1.00f,-1.00f, 1.00f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom left
		 1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom right
		 1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.333f,		0.0f, -1.0f, 0.0f,// back bottom right

		 //back
		-1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom left
		-1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top left
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top right
		-1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.50f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom left
		 1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.25f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom right
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top right
		
		 // front
		-1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.75f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom left
		-1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.666f,		0.0f, 0.0f, 1.0f,	// front top left
		 1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.666f,		0.0f, 0.0f, 1.0f,	// front top right
		-1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.75f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom left
		 1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.666f,		0.0f, 0.0f, 1.0f,  // front top right
		 1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom right

		 // right
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		1.0f, 0.0f, 0.0f,	// back top right
		 1.00f,-1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.25f, 0.333f,		1.0f, 0.0f, 0.0f,  // back bottom right  
 		 1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.00f, 0.333f,		1.0f, 0.0f, 0.0f,	// front bottom right
		 1.00f, 1.00f,-1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		1.0f, 0.0f, 0.0f,	// back top right
		 1.00f, 1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.00f, 0.666f,		1.0f, 0.0f, 0.0f,   // front top right
		 1.00f,-1.00f, 1.00f,		0.49f, 0.01f, 0.13f, 1.00f,		0.00f, 0.333f,		1.0f, 0.0f, 0.0f,// front bottom right
	};

	vector<float> textureVerticesKeyboard
	{
		0.0f, 0.0f,		// bottom left
		0.0f, 1.0f,		// top left
		1.0f, 1.0f,		// top right
		0.0f, 0.0f,     // bottom right

		0.0f, 0.0f,     // bottom left
		0.0f, 0.0f,		// top left
		1.0f, 0.0f,		// top right
		0.0f, 0.0f,		// bottom right
	};

	vector<unsigned int> indices
	{
		5, 1, 2,
		5, 6, 2,
		
		4, 5, 1,
		4, 1, 0,
		
		4, 0, 3,
		4, 7, 3,

		0, 1, 2,
		0, 3, 2,

		4, 5, 6,
		4, 6, 7,

		2, 3, 7,
		2, 6, 7,
	};
} basicCubeObjectStruct;

struct 
{
	
vector<float> CylinderVerticesComplete{

		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.000f,1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,

		0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,

		0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,
		0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		0.000f,-1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.000f,-1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		-0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,

		-0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		-1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		-0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,

		-0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.00f,0.00f, -1.00f,
		0.000f,1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,

		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.000f,1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,

		0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,

		0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,
		0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		0.000f,-1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		0.000f,-1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		-0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,

		-0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,-1.000f,
		-1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,-1.000f,
		-0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,

		-0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,-1.000f,
		-0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.500f,0.500f,0.000f,0.000f,-1.000f,
		-0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		0.000f,1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,0.979f,0.000f,
		0.000f,1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,0.979f,0.000f,
		0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.206f,0.979f,0.000f,
		0.000f,1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,0.979f,0.000f,
		0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.537f,0.844f,0.000f,
		0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.537f,0.844f,0.000f,

		0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.537f,0.844f,0.000f,
		0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.537f,0.844f,0.000f,
		0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.844f,0.537f,0.000f,
		0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.844f,0.537f,0.000f,
		0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.844f,0.537f,0.000f,
		0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.844f,0.537f,0.000f,

		0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.979f,0.206f,0.000f,
		0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.979f,0.206f,0.000f,
		1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.979f,0.206f,0.000f,
		0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.979f,0.206f,0.000f,
		1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.979f,0.206f,0.000f,
		1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.979f,0.206f,0.000f,
		0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.979f,-0.206f,0.000f,
		1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.979f,-0.206f,0.000f,
		0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,-0.000f,0.000f,
		0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.844f,-0.537f,0.000f,
		0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.844f,-0.537f,0.000f,

		0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.844f,-0.537f,0.000f,
		0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.844f,-0.537f,0.000f,
		0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,-0.000f,0.000f,
		0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,-0.000f,0.000f,
		0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.537f,-0.844f,0.000f,
		0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.537f,-0.844f,0.000f,
		0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.537f,-0.844f,0.000f,
		0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.537f,-0.844f,0.000f,

		0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.206f,-0.979f,0.000f,
		0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.206f,-0.979f,0.000f,
		0.000f,-1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,-0.979f,0.000f,
		0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.206f,-0.979f,0.000f,
		0.000f,-1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		0.000f,-1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		0.000f,-1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,-0.979f,0.000f,
		0.000f,-1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,-0.979f,0.000f,
		-0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.206f,-0.979f,0.000f,
		0.000f,-1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.206f,-0.979f,0.000f,
		-0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,-0.000f,0.000f,
		-0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,-0.000f,0.000f,
		-0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.537f,-0.844f,0.000f,
		-0.380f,-0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.537f,-0.844f,0.000f,

		-0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.537f,-0.844f,0.000f,
		-0.380f,-0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.537f,-0.844f,0.000f,
		-0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		-0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		-0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.844f,-0.537f,0.000f,
		-0.710f,-0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.844f,-0.537f,0.000f,
		-0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.844f,-0.537f,0.000f,
		-0.710f,-0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.844f,-0.537f,0.000f,

		-0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		-0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		-0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.979f,-0.206f,0.000f,
		-0.920f,-0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.979f,-0.206f,0.000f,
		-1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,-0.979f,-0.206f,0.000f,
		-0.920f,-0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.979f,-0.206f,0.000f,
		-1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
		-1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,

		-1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,-0.979f,0.206f,0.000f,
		-1.000f,0.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,-0.979f,0.206f,0.000f,
		-0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.979f,0.206f,0.000f,
		-1.000f,0.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,-0.979f,0.206f,0.000f,
		-0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		-0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
		-0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.844f,0.537f,0.000f,
		-0.920f,0.380f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.844f,0.537f,0.000f,

		-0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.844f,0.537f,0.000f,
		-0.920f,0.380f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,1.000f,-0.844f,0.537f,0.000f,
		-0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		-0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,0.000f,0.000f,0.000f,
		-0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.537f,0.844f,0.000f,
		-0.710f,0.710f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.537f,0.844f,0.000f,
		-0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.537f,0.844f,0.000f,
		-0.710f,0.710f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,1.000f,-0.537f,0.844f,0.000f,

		-0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		-0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,0.000f,0.000f,0.000f,
		-0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.206f,0.979f,0.000f,
		-0.380f,0.920f,-1.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.206f,0.979f,0.000f,
		0.000f,1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f, -0.206f, 0.979f, 0.000f,
		-0.380f,0.920f,0.000f,0.160f,0.160f,0.170f,1.000f,1.000f,0.000f,-0.206f,0.979f,0.000f,
		0.000f,1.000f,-1.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f, 0.000f, 0.000f,
		0.000f,1.000f,0.000f,0.160f,0.160f,0.170f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f
	
	};
vector<float> PresonusKnobComplete{

0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,1.00f,
-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,1.00f,
-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,1.00f,
-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,1.00f,
-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,1.00f,
-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,1.00f,
-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,-1.00f,
0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,-1.00f,
0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,-1.00f,
0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,-1.00f,
1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,-1.00f,
0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,-1.00f,
-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,-1.00f,
-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,-1.00f,
-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,-1.00f,
-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,		0.00f,0.00f,-1.00f,
-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,-1.00f,
0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,-1.00f,



0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,      0.00f,0.00f,0.00f,
0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,	0.00f,0.00f,0.00f,
-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,	0.00f,0.00f,0.00f,
-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,		0.00f,0.00f,0.00f,
-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,	0.00f,0.00f,0.00f,
-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,		0.00f,0.00f,0.00f,
-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,	0.00f,0.00f,0.00f,
0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,		0.00f,0.00f,0.00f,
0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f,
0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,		0.00f,0.00f,0.00f
};


vector<float> PresonusKnobTaperedNormals{

	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,

	0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,

	0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,
	0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,

	-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,

	-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,
	-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,

	0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,

	0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,
	0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,

	-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,1.00f,
	-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,1.00f,
	-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,

	-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,1.00f,
	-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,1.00f,
	-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.50f,0.50f,0.00f,0.00f,1.00f,
	-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.20f,0.96f,0.19f,
	0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.20f,0.96f,0.19f,
	0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.20f,0.96f,0.19f,
	0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.19f,0.96f,0.19f,
	0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.19f,0.96f,0.19f,
	0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.53f,0.83f,0.19f,
	0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.53f,0.83f,0.19f,

	0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.57f,0.79f,0.20f,
	0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.57f,0.79f,0.20f,
	0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.83f,0.53f,0.20f,
	0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.83f,0.53f,0.20f,
	0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.80f,0.57f,0.18f,
	0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.80f,0.57f,0.18f,

	0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.96f,0.20f,0.19f,
	0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.96f,0.20f,0.19f,
	1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.96f,0.19f,0.19f,
	0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.96f,0.19f,0.19f,
	0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.96f,0.20f,0.19f,
	1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.96f,0.20f,0.19f,
	0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.96f,-0.19f,0.19f,
	0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.96f,0.19f,0.19f,
	0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.83f,-0.53f,0.19f,
	0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.83f,-0.53f,0.19f,

	0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.79f,-0.57f,0.20f,
	0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.79f,-0.57f,0.20f,
	0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.53f,-0.83f,0.20f,
	0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.53f,-0.83f,0.20f,
	0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.57f,-0.80f,0.18f,
	0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.57f,-0.80f,0.18f,

	0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.20f,-0.96f,0.19f,
	0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.20f,-0.96f,0.19f,
	0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.19f,-0.96f,0.19f,
	0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.19f,-0.96f,0.19f,
	0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.20f,-0.96f,0.19f,
	0.00f,-1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.20f,-0.96f,0.19f,
	-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.19f,-0.96f,0.19f,
	0.00f,-0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.19f,-0.96f,0.19f,
	-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.53f,-0.83f,0.19f,
	-0.38f,-0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.53f,-0.83f,0.19f,

	-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.57f,-0.79f,0.20f,
	-0.31f,-0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.57f,-0.79f,0.20f,
	-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.83f,-0.53f,0.20f,
	-0.71f,-0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.83f,-0.53f,0.20f,
	-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.80f,-0.57f,0.18f,
	-0.56f,-0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.80f,-0.57f,0.18f,

	-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.96f,-0.20f,0.19f,
	-0.92f,-0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.96f,-0.20f,0.19f,
	-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,-0.96f,-0.19f,0.19f,
	-0.74f,-0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.96f,-0.19f,0.19f,
	-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,

	-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,-0.96f,0.20f,0.19f,
	-1.00f,0.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,-0.96f,0.20f,0.19f,
	-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.96f,0.19f,0.19f,
	-0.80f,0.00f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,-0.96f,0.19f,0.19f,
	-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,0.00f,0.00f,0.00f,
	-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.83f,0.53f,0.19f,
	-0.92f,0.38f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.83f,0.53f,0.19f,

	-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.79f,0.57f,0.20f,
	-0.74f,0.31f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,1.00f,-0.79f,0.57f,0.20f,
	-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,0.00f,0.00f,0.00f,
	-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.53f,0.83f,0.20f,
	-0.71f,0.71f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.53f,0.83f,0.20f,
	-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.57f,0.80f,0.18f,
	-0.56f,0.56f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,1.00f,-0.57f,0.80f,0.18f,

	-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,0.00f,0.00f,0.00f,
	-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.20f,0.96f,0.19f,
	-0.38f,0.92f,-1.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.20f,0.96f,0.19f,
	0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,-0.20f, 0.96f, 0.19f,
	-0.31f,0.74f,0.00f,0.20f,0.23f,0.63f,1.00f,1.00f,0.00f,-0.20f,0.96f,0.19f,
	0.00f,1.00f,-1.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f,
	0.00f,0.80f,0.00f,0.20f,0.23f,0.63f,1.00f,0.00f,0.00f,0.00f,0.00f,0.00f
};
	
	vector<float> pnormals2{

0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.147f,0.699f,0.699f,1.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.000f,0.000f,1.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,1.000f,0.206f,0.979f,0.000f,0.000f,0.000f,0.000f,
0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,
0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,
0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,
0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,
0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,
0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,
0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,0.979f,0.206f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,
0.844f,0.537f,0.000f,0.844f,0.537f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,
0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,0.537f,0.844f,0.000f,
0.000f,0.000f,0.000f,0.000f,0.000f,0.000f,0.206f,0.979f,0.000f,0.206f,0.979f,0.000f,
0.000f,0.000f,0.000f,0.206f,0.979f,0.000f,1.000f,0.000f,0.000f,0.000f,0.000f,0.000f
	
	
	
	
	
	
	
	
	
	
	};

	vector<float> pnormals{
		0.000f,0.000f,-0.248f,
		0.000f,0.000f,-0.248f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,-0.000f,-0.241f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,-0.000f,-0.241f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.248f,
		0.000f,-0.000f,-0.248f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.248f,
		-0.000f,0.000f,-0.248f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.241f,
		-0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.241f,
		-0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.248f,
		-0.000f,0.000f,-0.248f,
		0.000f,0.000f,0.000f,
		0.000f,-0.000f,-0.248f,
		0.000f,0.000f,-0.248f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,0.000f,
		-0.000f,0.000f,-0.248f,
		0.000f,0.000f,-0.248f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.248f,
		0.000f,0.000f,-0.248f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.241f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.241f,
		0.000f,0.000f,-0.241f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.248f,
		-0.060f,0.310f,-0.248f,
		1.000f,0.000f,0.000f,
		0.000f,0.000f,-0.380f,
		0.000f,0.000f,-0.380f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,-0.000f,-0.383f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,-0.000f,-0.383f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.380f,
		0.000f,-0.000f,-0.380f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.380f,
		-0.000f,0.000f,-0.380f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.383f,
		-0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.383f,
		-0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,-0.380f,
		-0.000f,0.000f,-0.380f,
		0.000f,0.000f,0.000f,
		0.000f,-0.000f,-0.380f,
		0.000f,0.000f,-0.380f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,0.000f,
		-0.000f,0.000f,-0.380f,
		0.000f,0.000f,-0.380f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.380f,
		0.000f,0.000f,-0.380f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.383f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.383f,
		0.000f,0.000f,-0.383f,
		-0.000f,0.000f,0.000f,
		0.000f,0.000f,-0.380f,
		0.080f,-0.380f,-0.076f,




		-0.000f,0.000f,0.000f,
		-0.080f,-0.380f,-0.076f,
		-0.080f,-0.380f,-0.076f,
		0.060f,0.310f,0.060f,
		0.060f,0.310f,0.060f,
		0.000f,-0.000f,0.000f,
		-0.000f,0.000f,0.000f,
		-0.210f,-0.330f,-0.074f,
		-0.210f,-0.330f,-0.074f,
		0.180f,0.250f,0.064f,
		0.180f,0.250f,0.064f,
		0.000f,-0.000f,0.000f,
		-0.000f,0.000f,0.000f,
		-0.330f,-0.210f,-0.081f,
		-0.330f,-0.210f,-0.081f,
		0.250f,0.180f,0.058f,
		0.250f,0.180f,0.058f,
		0.000f,-0.000f,0.000f,
		-0.000f,0.000f,0.000f,
		-0.380f,-0.080f,-0.074f,
		-0.380f,-0.080f,-0.074f,
		0.310f,0.060f,0.062f,
		0.310f,0.060f,0.062f,
		0.000f,-0.000f,0.000f,
		0.000f,0.000f,-0.000f,
		-0.380f,0.080f,-0.076f,
		-0.380f,0.080f,-0.076f,
		0.310f,-0.060f,0.060f,
		0.310f,-0.060f,0.060f,
		0.000f,-0.000f,0.000f,
		0.000f,0.000f,-0.000f,
		-0.330f,0.210f,-0.074f,
		-0.330f,0.210f,-0.074f,
		0.250f,-0.180f,0.064f,
		0.250f,-0.180f,0.064f,
		0.000f,-0.000f,0.000f,
		0.000f,0.000f,-0.000f,
		-0.210f,0.330f,-0.081f,
		-0.210f,0.330f,-0.081f,
		0.180f,-0.250f,0.058f,
		0.180f,-0.250f,0.058f,
		0.000f,-0.000f,0.000f,
		0.000f,0.000f,-0.000f,
		-0.080f,0.380f,-0.074f,
		-0.080f,0.380f,-0.074f,
		0.060f,-0.310f,0.062f,
		0.060f,-0.310f,0.062f,
		0.000f,-0.000f,0.000f,
		0.000f,0.000f,0.000f,
		0.080f,0.380f,-0.076f,
		0.080f,0.380f,-0.076f,
		-0.060f,-0.310f,0.060f,
		-0.060f,-0.310f,0.060f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,
		0.210f,0.330f,-0.074f,
		0.210f,0.330f,-0.074f,
		-0.180f,-0.250f,0.064f,
		-0.180f,-0.250f,0.064f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,
		0.330f,0.210f,-0.081f,
		0.330f,0.210f,-0.081f,
		-0.250f,-0.180f,0.058f,
		-0.250f,-0.180f,0.058f,
		0.000f,0.000f,0.000f,
		0.000f,0.000f,0.000f,
		0.380f,0.080f,-0.074f,
		0.380f,0.080f,-0.074f,
		-0.310f,-0.060f,0.062f,
		-0.310f,-0.060f,0.062f,
		0.000f,0.000f,-0.000f,
		0.000f,0.000f,0.000f,
		0.380f,-0.080f,-0.076f,
		0.380f,-0.080f,-0.076f,
		-0.310f,0.060f,0.060f,
		-0.310f,0.060f,0.060f,
		0.000f,0.000f,-0.000f,
		-0.000f,0.000f,0.000f,
		0.330f,-0.210f,-0.074f,
		0.330f,-0.210f,-0.074f,
		-0.250f,0.180f,0.064f,
		-0.250f,0.180f,0.064f,
		0.000f,0.000f,-0.000f,
		-0.000f,0.000f,0.000f,
		0.210f,-0.330f,-0.081f,
		0.210f,-0.330f,-0.081f,
		-0.180f,0.250f,0.058f,
		-0.180f,0.250f,0.058f,
		0.000f,0.000f,-0.000f,
		-0.000f,0.000f,0.000f,
		0.080f,-0.380f,-0.074f,
		0.080f,-0.380f,-0.074f,
		-0.000f,0.000f,0.000f,
		0.060f,-0.310f,-0.062f,
		0.800f,0.000f,0.000f,
		-0.800f,-0.000f,0.184f

	};



	vector<float> vertices{

		 0.000f,  0.000f, 0.0f,

		 0.000f,  1.000f, 0.0f,
		 0.382f,  0.923f, 0.0f,
		 0.707f,  0.707f, 0.0f,
		 0.923f,  0.382f, 0.0f,

		 1.000f,  0.000f, 0.0f,
		 0.923f, -0.382f, 0.0f,
		 0.707f, -0.707f, 0.0f,
		 0.382f, -0.923f, 0.0f,

		 0.000f, -1.000f, 0.0f,
		-0.382f, -0.923f, 0.0f,
		-0.707f, -0.707f, 0.0f,
		-0.923f, -0.382f, 0.0f,

		-1.000f,  0.000f, 0.0f,
		-0.923f,  0.382f, 0.0f,
		-0.707f,  0.707f, 0.0f,
		-0.382f,  0.923f, 0.0f,

		 0.000f,  0.000f, -1.0f,

		 0.000f,  1.000f, -1.0f,			
		 0.382f,  0.923f, -1.0f,			
		 0.707f,  0.707f, -1.0f,			
		 0.923f,  0.382f, -1.0f,			

		 1.000f,  0.000f, -1.0f,		
		 0.923f, -0.382f, -1.0f,		
		 0.707f, -0.707f, -1.0f,		
		 0.382f, -0.923f, -1.0f,		

		 0.000f, -1.000f, -1.0f,		
		-0.382f, -0.923f, -1.0f,		
		-0.707f, -0.707f, -1.0f,		
		-0.923f, -0.382f, -1.0f,		

		-1.000f,  0.000f, -1.0f,		
		-0.923f,  0.382f, -1.0f,		
		-0.707f,  0.707f, -1.0f,		
		-0.382f,  0.923f, -1.0f,			 
	};

	vector<float> colorsMatBlack
	{
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,

		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
		0.16f, 0.16f, 0.17f, 1.0f,
	};

	vector<float> colorsSilver
	{
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,

		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
		0.753f, 0.753f, 0.753f, 1.0f,
	};

	vector<float> colors
	{
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,

		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
		0.20f, 0.23f, 0.63f, 1.0f,
	};

	vector<float> textureVertices
	{		
			0.5f, 0.5f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,
			
			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,
		
			0.5f, 0.5f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,
			
			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,

			0.0f, 0.0f,
			0.0f, 1.0f,
			1.0f, 1.0f,
			1.0f, 0.0f,
	};

	vector<unsigned int> indices
	{
		// front circle
		0,  1,  2,
		  2,  3,0,
		0,  3,  4,
		  4,  5,0,

		0,  5,  6,
		  6,  7,0,
		0,  7,  8,
		  8,  9,0,

		0,  9, 10,
		 10, 11,0,
		0, 11, 12,
		 12, 13,0,

		0, 13, 14,
		 14, 15,0,
		0, 15, 16,
		 16, 1,0,

		//Back Circle
		17, 18, 19,
		19, 20, 17,
		17, 20, 21,
		17, 21, 22,

		17, 22, 23,
		23, 24,17, 
		17, 24, 25,
		25, 26,17, 
		
		17, 26, 27,
		 27, 28,17,
		17, 28, 29,
		 29, 30,17,
		
		17, 30, 31,
		31, 32, 17,
		17, 32, 33,
		33, 18, 17,

		1, 18, 19,
		19, 2, 1, 
		2, 19, 20,
		20, 3, 2,
		3, 20,21,
		21,4,3, 
		4, 21,22,
		22,5,4, 
		5, 22, 23,
		23,6, 5, 
		6, 23, 24,
		  24,7,6,
		7, 24, 25,
		  25,8,7,
		8, 25, 26,
		  26,9,8,
		9, 26, 27,
		  27,10,9,
		10, 27, 28,
		  28,11,10,
		11, 28, 29,
		 29, 12,11,
		12, 29, 30,
		  30,13,12,
		13, 30, 31,
		 31,14,13, 
		14, 31, 32, 
		  32,15,14,
		15, 32, 33,
		  33,16,15,
		16, 33, 18,
		18, 1,16, 

	};

} cylinderObjectStruct;

struct  {
	vector<float> vertices
	{
		-1.0f, -1.0f, 0.0f,
		1.0f, -1.0f,  0.0f,
		-1.0f, 1.0f,  0.0f,
		1.0f,  1.0f,  0.0f,
	};

	vector<float> colors{
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
		0.44f, 0.34f, 0.04f, 1.0f,
	};

	vector<float> colorsGreen
	{
		0.18f, 0.40f, 0.20f, 1.0f,
		0.18f, 0.40f, 0.20f, 1.0f,
		0.18f, 0.40f, 0.20f, 1.0f,
		0.18f, 0.40f, 0.20f, 1.0f,
	};

	vector<float> textureVertices
	{
		0.0f, 0.0f,
		1.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
	};

	vector<float> colorsPink
	{
		0.40f, 0.18f, 0.36f, 1.0f,
		0.40f, 0.18f, 0.36f, 1.0f,
		0.40f, 0.18f, 0.36f, 1.0f,
		0.40f, 0.18f, 0.36f, 1.0f,
	};

	vector<unsigned int> indices
	{
		0, 1, 2,
		1, 2, 3,
	};
} planeObjectStruct;

struct 
{
	vector<float> faderport
	{
		/*** X **** Y **** Z ********** R **** G **** B **** A ******** U **** V *********  Normals */
		// Top
		-0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top left corner
		-0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		0.0f, 1.0f, 0.0f,	// back top left corner
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 1.0f, 0.0f,   // back top right corner
		-0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top left corner
		 0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 1.000f,		0.0f, 1.0f, 0.0f,	// front top right corner
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 1.0f, 0.0f,	// back top right corner

		 // left
		-0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.333f,		-1.0f, 0.0f, 0.0f,	// front bottom left corner
		-0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.666f,		-1.0f, 0.0f, 0.0f,	// front top left corner
		-0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		-1.0f, 0.0f, 0.0f,// back top left corner
		-0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.333f,		-1.0f, 0.0f, 0.0f,	// front bottom left
		-0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		-1.0f, 0.0f, 0.0f,// back top left corner
		-0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		-1.0f, 0.0f, 0.0f,	// back bottom left corner

		// bottom
		-0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom left
		-0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		0.0f, -1.0f, 0.0f,	// back bottom left
		 0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.333f,		0.0f, -1.0f, 0.0f,	// back bottom  right
		-0.75f,-1.00f,0.03f,	    0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom left
		 0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.000f,		0.0f, -1.0f, 0.0f,	// front bottom right
		 0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.333f,		0.0f, -1.0f, 0.0f,// back bottom right

		 //back
		-0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom left
		-0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.50f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top left
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top right
		-0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.50f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom left
		 0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.25f, 0.333f,		0.0f, 0.0f, -1.0f,	// back bottom right
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		0.0f, 0.0f, -1.0f,	// back top right

		 // front
		-0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.75f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom left
		-0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		0.75f, 0.666f,		0.0f, 0.0f, 1.0f,	// front top left
		 0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.666f,		0.0f, 0.0f, 1.0f,	// front top right
		-0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.75f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom left
		 0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.666f,		0.0f, 0.0f, 1.0f,  // front top right
		 0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		1.00f, 0.333f,		0.0f, 0.0f, 1.0f,	// front bottom right

		 // right
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,		0.25f, 0.666f,		1.0f, 0.0f, 0.0f,	// back top right
		 0.75f,-1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.25f, 0.333f,		1.0f, 0.0f, 0.0f,  // back bottom right  
		 0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.00f, 0.333f,		1.0f, 0.0f, 0.0f,	   // front bottom right
		 0.75f,1.00f,-0.25f,		0.49f, 0.01f, 0.13f, 1.00f,	    0.25f, 0.666f,		1.0f, 0.0f, 0.0f,	   // back top right
		 0.75f,1.00f,0.25f,		    0.49f, 0.01f, 0.13f, 1.00f,     0.00f, 0.666f,		1.0f, 0.0f, 0.0f,      // front top right
		 0.75f,-1.00f,0.03f,		0.49f, 0.01f, 0.13f, 1.00f,		0.00f, 0.333f,		1.0f, 0.0f, 0.0f,  // front bottom right
	};



	vector<float> tangentBitangent{

	};

	vector<float> vertices
	{
		/**Presonus device back*/
		-0.75f, -1.0f, -0.25f, // 0 back bottom left
		-0.75f,  1.0f, -0.25f, // 1 back top left
		 0.75f,  1.0f, -0.25f, // 2 back top right
		 0.75f, -1.0f, -0.25f, // 3 back bottom right

		-0.75f,  -1.0f,  0.028f, // 4 front bottom left
		-0.75f,   1.0f,  0.25f,  // 5 front top left
		 0.75f,   1.0f,  0.25f,  // 6 front top right
		 0.75f,  -1.0f,  0.028f, // 7 front bottom right
	};

	vector<float> colors 
	{
		/**Presonus device back*/
		 0.27f, 0.31f, 0.33f, 1.0f,    // 0 back bottom left
		 0.27f, 0.31f, 0.33f, 1.0f,    // 1 back upper left
		 0.27f, 0.31f, 0.33f, 1.0f,    // 2 back upper right
		 0.27f, 0.31f, 0.33f, 1.0f,    // 3 back bottom right

		 0.54f, 0.55f, 0.54f, 1.0f,    // 4 front bottom left
		 0.54f, 0.55f, 0.54f, 1.0f,    // 5 front upper left
		 0.54f, 0.55f, 0.54f, 1.0f,    // 6 front upper right
		 0.54f, 0.55f, 0.54f, 1.0f,    // 7 front bottom right
	};

	vector<float> colorsAlpha
	{
		/**Presonus device back*/
		0.27f, 0.31f, 0.33f, 0.0f,    // 0 back bottom left
		0.27f, 0.31f, 0.33f, 0.0f,    // 1 back upper left
		0.27f, 0.31f, 0.33f, 0.0f,    // 2 back upper right
		0.27f, 0.31f, 0.33f, 0.0f,    // 3 back bottom right



		0.54f, 0.55f, 0.54f, 0.0f,    // 4 front bottom left
		0.54f, 0.55f, 0.54f, 0.0f,    // 5 front upper left
		0.54f, 0.55f, 0.54f, 0.0f,    // 6 front upper right
		0.54f, 0.55f, 0.54f, 0.0f,    // 7 front bottom right
	};

	vector<float> textureVertices 
	{
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
	};

	vector<unsigned int> indices 
	{
		5, 1, 2,
		5, 6, 2,

		4, 5, 1,
		4, 1, 0,

		4, 0, 3,
		4, 7, 3,

		0, 1, 2,
		0, 3, 2,

		4, 5, 6,
		4, 6, 7,

		2, 3, 7,
		2, 6, 7,
	};
} cubeObjectStruct;

struct 
{
	vector<float> vertices
	{
		-0.06f,  -0.06f,-0.12f,
		-0.06f,  -0.06f, 0.12f,
		0.06f,  -0.06f, 0.12f,
		0.06f,  -0.06f, -0.12f,

		-0.06f, 0.06f, -0.12f,
		-0.06f, 0.06f,  0.12f,
		0.06f, 0.06f,  0.12f,
		0.06f, 0.06f, -0.12f,
	};

	vector<float> colors
	{
		0.27f, 0.31f, 0.33f, 1.0f,    // 0 
		0.27f, 0.31f, 0.33f, 1.0f,    // 2 
		0.27f, 0.31f, 0.33f, 1.0f,   // 3
		0.27f, 0.31f, 0.33f, 1.0f,    // 1


		0.27f, 0.31f, 0.33f, 1.0f,    // 4
		0.27f, 0.31f, 0.33f, 1.0f,    // 6 
		0.27f, 0.31f, 0.33f, 1.0f,    // 7
		0.27f, 0.31f, 0.33f, 1.0f,    // 5
	};

	vector<float> textureVertices 
	{
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
	};

	vector<unsigned int> indices
	{
		0, 1, 2,
		0, 2, 3,

		4, 5, 6,
		4, 6, 7,

		0, 4, 5,
		0, 1, 5,

		1, 5, 6,
		1, 2, 6,

		2, 6, 7,
		2, 3, 7,

		0, 3, 7,
		0, 4, 7
	};
} sliderObjectStruct;

struct 
{
	vector<float> vertices
	{
		/**Presonus device back*/
		-0.366f, -0.5f, -0.5f,
		0.366f, -0.5f, -0.5f,
		-0.366f, 0.5f, -0.5f,
		0.366f, 0.5f, -0.5f,

		-0.366f, -0.5f, 0.0f,
		0.366f, -0.5f, 0.0f,
		-0.366f, 0.5f, 0.0f,
		0.366f, 0.5f, 0.0f,
	};

	vector<float> colors
	{
		/**Presonus device back*/
		0.08f, 0.09f, 0.09f, 1.0f, // 0 back lower left
		0.08f, 0.09f, 0.09f, 1.0f,    // 1 back lower right
		0.08f, 0.09f, 0.09f, 1.0f, // 2, back upper left
		0.08f, 0.09f, 0.09f, 1.0f,      //3 back upper right

		0.08f, 0.09f, 0.09f, 1.0f, // 4 front lower left
		0.08f, 0.09f, 0.09f, 1.0f,   // 5 front lower right
		0.08f, 0.09f, 0.09f, 1.0f, // 6, front upper left
		0.08f, 0.09f, 0.09f, 1.0f      //7 front upper right
	};

	vector<float> textureVertices 
	{
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
	};

	vector<unsigned int> indices = {
	/** flat front indices*/
	0, 1, 2,
	3, 2, 1,

	/** flat back indices */
	4, 5, 6,
	7, 6, 5,

	/** left side*/
	0, 4, 2,
	2, 6, 4,

	/** top side*/
	2, 3, 6,
	7, 3, 6,

	/** bottom */
	0, 1, 4,
	5, 4, 1,
	/** right side */
	1, 5, 3,
	3, 7, 5
	};
} sliderBackingObjectStruct;

struct {


} focusriteObjectStruct;

struct {/** Triangle Vertices Array, takes constexpr size_t to avoid hardcoding class constructors */
vector<float> vertices 
{
     // Vertex Positions (x,y,z)    // Colors (r,g,b,a)
 -1.00f, -1.0f,  1.0f,	    0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left corner a
 0.00f, 1.0f, 0.0f,			0.89f, 0.914f, 1.0f, 0.00f,		0.5f,  0.5f,		0.0f, 0.0f, 1.0f,	// front bottom left corner a
 1.00f, -1.0f, 1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		1.0f,  0.0f,		0.0f, 0.0f, 1.0f,	// front bottom left corner a

-1.00f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// front bottom left corner a
 0.00f,  1.0f, 0.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// front bottom left corner a
 1.00f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		0.0f, 0.0f, -1.0f,	// front bottom left corner a

 -1.00f, -1.0f,  1.0f,	    0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 0.00f, 1.0f, 0.0f,			0.89f, 0.914f, 1.0f, 0.00f,		0.5f,  0.5f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 -1.00f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		1.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a

 1.00f, -1.0f, 1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 0.00f,  1.0f, 0.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 1.00f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a


 -1.0f, -1.0f, 1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 -1.0f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 1.0f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a

 -1.0f, -1.0f, 1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 1.0f, -1.0f, -1.0f,		0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a
 1.0f, -1.0f, 1.0f,			0.89f, 0.914f, 1.0f, 0.00f,		0.0f,  0.0f,		1.0f, 1.0f, 1.0f,	// front bottom left corner a

};

vector<float> colors 
{
	0.109f, 0.0f,   0.698f, 1.0f,
	 0.389f, 0.964f, 0.922f, 1.0f,
	 0.968f, 0.0f,   0.988f, 1.0f,
	 0.984f, 0.964f, 0.207f, 1.0f,
	  0.684f, 0.690f, 0.694f, 1.0f,
};

vector<float> textureVertices{

};

vector<unsigned int> indices 
{
     0, 1, 2,
     2, 3, 0,
     4, 0, 1,
     4, 3, 2,
     4, 2, 1,
     4, 3, 0
};


} pyramidObjectStruct;

vector<float> normals{
	0.00f, 0.00f, 1.0f
};