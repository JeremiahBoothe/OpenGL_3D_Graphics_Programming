#pragma once
using namespace std;
/*
* Singleton class for lighting management.
* @params ShaderProgram - collection of lighting parameters
* @returns Lighting Singleton
*/
class Lighting

{
private:
	static Lighting*

		lightingPtr;

	Lighting()
	{
	}
	GLint shaderProgram{};
	GLint cameraPosLoc{};
	GLint viewPosLoc{};
	GLint ambStrLoc{};
	GLint ambColLoc{};
	GLint light1ColLoc{};
	GLint light1PosLoc{};
	GLint light2ColLoc{};
	GLint light2PosLoc{};
	GLint light3ColLoc{};
	GLint light3PosLoc{};
	GLint objColLoc{};
	GLint specInt1Loc{};
	GLint highlghtSz1Loc{};
	GLint specInt2Loc{};
	GLint highlghtSz2Loc{};
	GLint specInt3Loc{};
	GLint highlghtSz3Loc{};
	GLint projection{};
	GLint view{};
	GLint model{};

public:
	Lighting(const Lighting& lightingObject) = delete;
	Lighting& operator=(const Lighting& lightingObject) = delete;

	static Lighting* getInstance()
	{
		if (lightingPtr == NULL) {

			lightingPtr = new Lighting();

			return lightingPtr;
		}
		else {
			return lightingPtr;
		}
	}

	// Destructor to clean up memory.
	~Lighting() {
		delete lightingPtr;
	}

	unsigned int setValues(GLint shaderProgram)
	{
		this->shaderProgram = shaderProgram;
		this->projection = glGetUniformLocation(shaderProgram, "projection");
		this->viewPosLoc = glGetUniformLocation(shaderProgram, "viewPosition");
		this->ambStrLoc = glGetUniformLocation(shaderProgram, "ambientStrength");
		this->ambColLoc = glGetUniformLocation(shaderProgram, "ambientColor");
		this->light1ColLoc = glGetUniformLocation(shaderProgram, "light1Color");
		this->light1PosLoc = glGetUniformLocation(shaderProgram, "light1Position");
		this->light2ColLoc = glGetUniformLocation(shaderProgram, "light2Color");
		this->light2PosLoc = glGetUniformLocation(shaderProgram, "light2Position");
		this->light3ColLoc = glGetUniformLocation(shaderProgram, "light3Color");
		this->light3PosLoc = glGetUniformLocation(shaderProgram, "light3Position");
		this->objColLoc = glGetUniformLocation(shaderProgram, "objectColor");
		this->specInt1Loc = glGetUniformLocation(shaderProgram, "specularIntensity1");
		this->highlghtSz1Loc = glGetUniformLocation(shaderProgram, "highlightSize1");
		this->specInt2Loc = glGetUniformLocation(shaderProgram, "specularIntensity2");
		this->highlghtSz2Loc = glGetUniformLocation(shaderProgram, "highlightSize2");
		this->specInt3Loc = glGetUniformLocation(shaderProgram, "specularIntensity3");
		this->highlghtSz3Loc = glGetUniformLocation(shaderProgram, "highlightSize3");
		this->cameraPosLoc = glGetUniformLocation(shaderProgram, "cameraPos");
		return shaderProgram;
	}
	
	void setAmbStrLoc(GLint ambStrLoc) {
		this->ambStrLoc = ambStrLoc;
	}

	GLint getViewPosLoc() { return this->viewPosLoc; }
	GLint getAmbStrLoc() { return this->ambStrLoc; }
	GLint getAmbColLoc() { return this->ambColLoc; } 
	GLint getLight1ColLoc() { return this->light1ColLoc; }
	GLint getLight1PosLoc() { return this->light1PosLoc; }
	GLint getLight2ColLoc() { return this->light2ColLoc; }
	GLint getLight2PosLoc() { return this->light2PosLoc; }
	GLint getLight3ColLoc() { return this->light3ColLoc; }
	GLint getLight3PosLoc() { return this->light3PosLoc; }
	GLint getObjColLoc() { return this->objColLoc; }
	GLint getSpecInt1Loc() { return this->specInt1Loc; }
	GLint getHighlghtSz1Loc() { return this->highlghtSz1Loc; }
	GLint getSpecInt2Loc() { return this->highlghtSz2Loc; }
	GLint getHighlghtSz2Loc() { return this->highlghtSz2Loc; }
	GLint getSpecInt3Loc() { return this->specInt3Loc; }
    GLint getHighlghtSz3Loc() { return this->highlghtSz3Loc; }
	GLint getShaderProgram() { return this->shaderProgram; }
	GLint getCameraPosLoc() { return this->cameraPosLoc; }
	GLint getProjLoc() { return this->projection; }
	GLint getViewLoc() { return this->view; }
	GLint getModelLoc() { return this->model; }
};