/**
* The Purpose of this program is to demonstrate my textured scene in all its lit glory
* @Author Jeremiah Boothe
* @Date 2/23/2024
*/

#include "DrawShapes.h"

int main(int argc, char* argv[])
{
    //Map to store ShapeObjects
    Shapes ShapeMap;
    ShaderCollection ShaderPrograms;

    //Initialize the program to pass arguments to the window
    if (!UInitialize(argc, argv, &window))    
        return EXIT_FAILURE;

    //sets up the starting point for the global lighting, and adds it to the globalLighting Singleton to manage
    Lighting* globalLighting = Lighting::getInstance();

    //Pre-compile Shaders & add to map
    createShaders(ShaderPrograms);

    // new starting point, to minimize the main function.
    BuildShapes(ShapeMap, ShaderPrograms);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window))
    {
        float currentFrame = static_cast<float>(glfwGetTime());
        gDeltaTime = currentFrame - gLastFrame;
        gLastFrame = currentFrame;

        // Process User Input in window
        UProcessInput(window);

        // Render Shape Objects to window
        URenderShape(ShapeMap, window, ShaderPrograms, globalLighting);

        glfwPollEvents();
    }
    
    //Cleans out the Shape Map of all objects and their buffers and shader programs.
    ShapeMap.clear();
    
    glfwTerminate();
     
    exit(0);
    return 0;
}

void createShaders(
    ShaderCollection& shaderCollection)
{

    {
        unsigned int shaderProgram = runShader::CreateShader(
            lotsOfLightsShader.vertexShaderSource,
            lotsOfLightsShader.fragmentShaderSource);

        std::string name = "lotsOfLight";

        auto shaderP1 = std::make_unique<ShaderPrograms>(shaderProgram);
        shaderCollection.insert({ name ,std::move(shaderP1) });
    }

    {
        unsigned int shadowMappingProgram = runShader::CreateShader(
            Shadow_Mapping.shadowVertShader,
            Shadow_Mapping.shadowFragShader);

        std::string name = "shadowMappingProgram";

        auto shaderP2 = std::make_unique<ShaderPrograms>(shadowMappingProgram);
        shaderCollection.insert({ name ,std::move(shaderP2) });
    }

    {
        unsigned int shadowDepthProgram = runShader::CreateShader(
            ShadowDepth.depthVertShader,
            ShadowDepth.depthFragShader);

        std::string name = "shadowDepthProgram";

        auto shaderP3 = std::make_unique<ShaderPrograms>(shadowDepthProgram);
        shaderCollection.insert({ name ,std::move(shaderP3) });
    }   

    {
        unsigned int emissionsProgram = runShader::CreateShader(
            Emissions.cubeVertLightingMap,
            Emissions.cubeFragLightingMap);

        std::string name = "emissionProgram";

        auto shaderP4 = std::make_unique<ShaderPrograms>(emissionsProgram);
        shaderCollection.insert({ name ,std::move(shaderP4) });
    }

    {
        unsigned int skyBoxShaderProgram = runShader::CreateShader(
            skyboxShaderSource.skyboxShaderSource,
            skyboxShaderSource.skyboxFragmentSource);

        std::string name = "skyBoxShaderProgram";

        auto shaderP5 = std::make_unique<ShaderPrograms>(skyBoxShaderProgram);
        shaderCollection.insert({ name ,std::move(shaderP5) });
    }

    {
        unsigned int cubeMapShaderProgram = runShader::CreateShader(
            cubeMapShaderShaderScript.cubeMapShaderSource,
            cubeMapShaderShaderScript.cubeMapFragmentSource);

        std::string name = "cubeMapShaderProgram";

        auto shaderP6 = std::make_unique<ShaderPrograms>(cubeMapShaderProgram);
        shaderCollection.insert({ name ,std::move(shaderP6) });
    }

    {
        unsigned int lightCubeShaderSource = runShader::CreateShader(
            lampShaders.lampVertexShaderSource,
            lampShaders.lampFragmentShaderSource);

        std::string name = "lightCubeShaderSource";

        auto shaderP7 = std::make_unique<ShaderPrograms>(lightCubeShaderSource);
        shaderCollection.insert({ name ,std::move(shaderP7) });
    }

    {
        unsigned int lightingShaderSource = runShader::CreateShader(
            lampShaders.lampVertexShaderSource,
            lampShaders.lampFragmentShaderSource);

        std::string name = "lightingShaderSource";

        auto shaderP8 = std::make_unique<ShaderPrograms>(lightingShaderSource);
        shaderCollection.insert({ name ,std::move(shaderP8) });
    }
};

void BuildShapes(
    Shapes& ShapeMap, ShaderCollection& shaderCollection)
{
    {       /* Creates all shapes in the scene */
        {   /* Skybox Scenery */ 

            UCreateShape("Skybox",
                ShapeMap,
                SkyBox.skyboxVertices,
                texturesStruct.faces,
                TextureId,
                shaderCollection);

            UCreateShape("CubeMap",
                ShapeMap,
                SkyBox.cubeVertices,
                texturesStruct.faces,
                TextureId,
                shaderCollection);

            /*
            UCreateShape("lighting",
                ShapeMap,
                basicCubeObjectStruct.vertices,
                texturesStruct.tableTexture,
                TextureId);*/

            UCreateShape("lightPyramid",
                ShapeMap,
                pyramidObjectStruct.vertices,
                texturesStruct.brickLight,
                TextureId,
                shaderCollection);

        }

        {            
            // Desk tops, 
            UCreateShape("tableTop1",
                ShapeMap,
                basicCubeObjectStruct.basicCubeObjects,
                texturesStruct.tableTexture3,
                TextureId,
                shaderCollection);

            UCreateShape("tableTop2",
                ShapeMap,
                basicCubeObjectStruct.basicCubeObjects,
                texturesStruct.tableTexture4,
                TextureId,
                shaderCollection);

            UCreateShape("mousePad",
                ShapeMap,
                basicCubeObjectStruct.basicCubeObjects,
                texturesStruct.mousepad,
                TextureId,
                shaderCollection);

            UCreateShape("keyboard",
                ShapeMap,
                basicCubeObjectStruct.basicCubeObjects,
                texturesStruct.keyboard,
                TextureId,
                shaderCollection);
        }

        {  
            UCreateShape("presonusBody",
                ShapeMap,
                cubeObjectStruct.faderport,
                texturesStruct.faderportmap,
                TextureId,
                shaderCollection);

            UCreateShape("presonusKnob",
                ShapeMap,
                cylinderObjectStruct.PresonusKnobTaperedNormals,
                texturesStruct.chromeSwirl,
                TextureId,
                shaderCollection);
            
            UCreateShape("presonusSlider",
                ShapeMap,
                basicCubeObjectStruct.sliderImproved,
                texturesStruct.chromeSwirl,
                TextureId,
                shaderCollection);

            UCreateShape("sliderBacking",
                ShapeMap,
                basicCubeObjectStruct.basicCubeObjects,
                texturesStruct.chromeSwirl,
                TextureId,
                shaderCollection);
        }

        { // Video Monitors       
            UCreateShape("monitor1",
                ShapeMap,
                basicCubeObjectStruct.focusriteVertices,
                texturesStruct.monitor1,
                TextureId,
                shaderCollection);

            UCreateShape("monitor2",
                ShapeMap,
                basicCubeObjectStruct.focusriteVertices,
                texturesStruct.monitor2,
                TextureId,
                shaderCollection);

            UCreateShape("monitorStand",
                ShapeMap,
                cylinderObjectStruct.CylinderVerticesComplete,
                texturesStruct.darkSwirl,
                TextureId,
                shaderCollection);
        }

        { // Speakers    
            UCreateShape("speakerRight",
                ShapeMap,
                basicCubeObjectStruct.focusriteVertices,
                texturesStruct.rightspeakermap,
                TextureId,
                shaderCollection);

            UCreateShape("speakerLeft",
                ShapeMap,
                basicCubeObjectStruct.focusriteVertices,
                texturesStruct.leftspeakermap,
                TextureId,
                shaderCollection);
        }

        { // Focusrite Audio Interface
            UCreateShape("focusRite",
                ShapeMap,
                basicCubeObjectStruct.focusriteVertices,
                texturesStruct.focusriteMap,
                TextureId,
                shaderCollection);

            UCreateShape("focusRiteKnobCollection",
                ShapeMap,
                cylinderObjectStruct.CylinderVerticesComplete,
                texturesStruct.chromeSwirl,
                TextureId,
                shaderCollection);
        }
    }
}

void UCreateShape(
    std::string name,
    Shapes& ShapeMap,
    vector<float> vertices,
    const char* filename,
    GLuint textureId,
    ShaderCollection& shaderCollection)
{
    // Creates objects and places them into the map as unique pointers.
    auto shape = std::make_unique<ShapeObject>(vertices);
    ShapeMap.insert({ name ,std::move(shape) });
    
    // Load object Textures
    UCreateTexture(filename, textureId, ShapeMap, name);
        
    // Calculate Stride for (x,y,z,r,g,b,a,u,v,tan,bitan)
    const GLuint floatsPerVertex = 3U;
    const GLuint floatsPerColor = 4U;
    const GLuint floatsPerUV = 2U;
    const GLuint floatsPerNormal = 3U;

    // set to 0 for now to not break the work buildCombinedVector() does
    const GLuint floatsPerTangent = 0U;
    const GLuint floatsPerBiTangent = 0U;

    const unsigned int SHADOW_WIDTH = 1024;
    const unsigned int SHADOW_HEIGHT = 1024;

    GLint stride = sizeof(float) * (floatsPerVertex + floatsPerColor + floatsPerUV + floatsPerNormal + floatsPerTangent + floatsPerBiTangent);

    glGenVertexArrays(1, ShapeMap.at(name)->getVaoPtr()); // we can also generate multiple VAOs or buffers at the same time
    glBindVertexArray(ShapeMap.at(name)->getVao());

    // Create 2 buffers: first one for the vertex data; second one for the indices
    glGenBuffers(2, ShapeMap.at(name)->getVboPtr());

    glBindBuffer(GL_ARRAY_BUFFER, ShapeMap.at(name)->getVbo()); // Activates the buffer
    glBufferData(GL_ARRAY_BUFFER, 4 * ShapeMap.at(name)->getVertices().size(), ShapeMap.at(name)->getVertices().data(), GL_STATIC_DRAW); // Sends vertex or coordinate data to the GPU

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ShapeMap.at(name)->getIbo());
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, 4 * ShapeMap.at(name)->getIndices().size(), ShapeMap.at(name)->getIndices().data(), GL_STATIC_DRAW);

    // Vertices - Attribute Pointer
    glVertexAttribPointer(0, floatsPerVertex, GL_FLOAT, GL_FALSE, stride, 0);
    glEnableVertexAttribArray(0);

    // Color - Attribute Pointer
    glVertexAttribPointer(1, floatsPerColor, GL_FLOAT, GL_FALSE, stride, (char*)(sizeof(float) * floatsPerVertex));
    glEnableVertexAttribArray(1);

    // Texture - Attribute Pointer
    glVertexAttribPointer(2, floatsPerUV, GL_FLOAT, GL_FALSE, stride, (char*)(sizeof(float) * (floatsPerVertex + floatsPerColor)));
    glEnableVertexAttribArray(2);

    // Normals - Attribute Pointer
    glVertexAttribPointer(3, floatsPerNormal, GL_FLOAT, GL_FALSE, stride, (char*)(sizeof(float) * (floatsPerVertex + floatsPerColor + floatsPerUV)));
    glEnableVertexAttribArray(3);

    // Tangent - Attribute Pointer - * Not fully Implemented *
    glVertexAttribPointer(4, floatsPerTangent, GL_FLOAT, GL_FALSE, stride, (char*)(sizeof(float) * (floatsPerVertex + floatsPerColor + floatsPerUV + floatsPerTangent)));
    glEnableVertexAttribArray(4);

    // BiTangent - Attribute Pointer - * Not fully Implemented *
    glVertexAttribPointer(5, floatsPerBiTangent, GL_FLOAT, GL_FALSE, stride, (char*)(sizeof(float) * (floatsPerVertex + floatsPerColor + floatsPerUV + floatsPerTangent + floatsPerBiTangent)));
    glEnableVertexAttribArray(5);

    // Shadow casting setup 
    glGenFramebuffers(1, ShapeMap.at(name)->getFboPtr());

    glGenTextures(1, ShapeMap.at(name)->getDepthMapPtr());
    glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, SHADOW_WIDTH, SHADOW_HEIGHT, 0, GL_DEPTH_COMPONENT, GL_FLOAT, NULL);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    ShapeMap.at(name)->setShaderProgram(
        shaderCollection.at("lotsOfLight")->getShaderProgram());
}

void UCreateShape(
    std::string name,
    Shapes& ShapeMap,
    vector<float> vertices,
    vector<std::string> filenames,
    GLuint textureId,
    ShaderCollection& shaderCollection)
{
    // Creates objects and places them into the map as unique pointers.
    auto shape = std::make_unique<ShapeObject>(vertices);

    ShapeMap.insert({ name, std::move(shape) });

    // Calculate Stride for (x,y,z,r,g,b,a,u,v,tan,bitan)
    const GLuint floatsPerVertex = 3U;
    const GLuint floatsPerNormal = 3U;
    GLint stride = sizeof(float) * (floatsPerVertex + floatsPerNormal);

    loadCubemap(filenames, textureId, ShapeMap, name);

    if (name == "Skybox") {
        glGenVertexArrays(1, ShapeMap.at(name)->getVaoPtr());
        glGenBuffers(1, ShapeMap.at(name)->getVboPtr());
        glBindVertexArray(ShapeMap.at(name)->getVao());
        glBindBuffer(GL_ARRAY_BUFFER, ShapeMap.at(name)->getVbo());
        glBufferData(GL_ARRAY_BUFFER, 4 * ShapeMap.at(name)->getVertices().size(), ShapeMap.at(name)->getVertices().data(), GL_STATIC_DRAW);
        
        loadCubemap(filenames, textureId, ShapeMap, name);
        // Vertices - Attribute Pointer
        
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        ShapeMap.at(name)->setShaderProgram(
            shaderCollection.at("skyBoxShaderProgram")->getShaderProgram());
    }


    if (name == "CubeMap")
    {

        glGenVertexArrays(1, ShapeMap.at(name)->getVaoPtr());
        glGenBuffers(1, ShapeMap.at(name)->getVboPtr());
        glBindVertexArray(ShapeMap.at(name)->getVao());
        glBindBuffer(GL_ARRAY_BUFFER, ShapeMap.at(name)->getVbo());
        glBufferData(GL_ARRAY_BUFFER, 4 * ShapeMap.at(name)->getVertices().size(), ShapeMap.at(name)->getVertices().data(), GL_STATIC_DRAW);

        loadCubemap(filenames, textureId, ShapeMap, name);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));

        ShapeMap.at(name)->setShaderProgram(
            shaderCollection.at("cubeMapShaderProgram")->getShaderProgram());
    }

}

void URenderShape(
    Shapes& ShapeMap,
    GLFWwindow* window,
    ShaderCollection& shaderCollection,
    Lighting* globalLighting)
{
    static GLuint projLoc;
    static GLuint viewLoc;
    static GLuint modelLoc;
    static GLuint UVScaleLoc;
    static GLuint cameraPosLoc{};
    static glm::vec3 cameraPos{};
    static glm::mat4 scale{};
    static glm::mat4 rotation{};
    static glm::vec3 location{};
    static glm::mat4 translation{};
    static glm::mat4 model{};
    static glm::mat4 projection;

    // Initialize Global Lighting Singleton
    globalLighting->setValues(shaderCollection.at("lotsOfLight")->getShaderProgram());

    // Enable z-depth
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    //glEnable(GL_STENCIL_TEST);
    glEnable(GL_MULTISAMPLE);
    // Enable Blending
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ZERO);
    glEnable(GL_BLEND);
    glEnable(GL_NORMALIZE);
    // Uncomment for polygon mode 
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    
    // Clear the frame and z buffers
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set up for camra views
    if (camera.CameraProjectionMode == PERSPECTIVE)    
        projection = glm::perspective(glm::radians(camera.Zoom), (GLfloat)WINDOW_WIDTH / (GLfloat)WINDOW_HEIGHT, 0.1f, 1000.0f);
    else
        projection = glm::ortho(-10.0f, 10.0f, -10.0f, 10.0f, 0.1f, 100.0f);

    glm::mat4 view = camera.GetViewMatrix();

    const glm::vec3 cameraPosition = camera.Position;
    // prints current position to console
    //std::cout << camera.Position.x << ", " << camera.Position.y << ", " << camera.Position.z << std::endl;

    glUseProgram(globalLighting->getShaderProgram());
    projLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "projection");
    viewLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "view");
    modelLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "model");
    UVScaleLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "uvScale");

    glUniform4f(globalLighting->getObjColLoc(), 0.5f, 0.5f, 0.5f, 0.5f);
    glUniform3f(globalLighting->getViewPosLoc(), camera.Position.x, camera.Position.y, camera.Position.z);
    glUniform1f(globalLighting->getAmbStrLoc(), 0.01f);

    glUniform3f(globalLighting->getObjColLoc(), 0.5f, 0.5f, 0.5f);
    glUniform3f(globalLighting->getLight3ColLoc(), 0.89f, 0.914f, 1.0f);
    
    //set ambient color
    glUniform3f(globalLighting->getAmbColLoc(), 1.0f, 1.0f, 1.0f);
    glUniform3f(globalLighting->getLight1ColLoc(), 0.1f, 0.8f, 0.3f);
    glUniform3f(globalLighting->getLight1PosLoc(), 0.0f, 4.45f, -8.1f);
    glUniform3f(globalLighting->getLight2ColLoc(), 0.8f, 0.3f, 0.1f);
    glUniform3f(globalLighting->getLight2PosLoc(), -3.0f, 6.0f, -4.0f);
    glUniform3f(globalLighting->getLight3ColLoc(), 0.89f, 0.914f, 1.0f);
    glUniform3f(globalLighting->getLight3PosLoc(), gLightPosition.x, gLightPosition.y, gLightPosition.z);

    //set specular intensity
    glUniform1f(globalLighting->getSpecInt1Loc(), 0.8f);
    glUniform1f(globalLighting->getSpecInt2Loc(), 0.8f);
    glUniform1f(globalLighting->getSpecInt3Loc(), 0.8f);
    //set specular highlight size
    glUniform1f(globalLighting->getHighlghtSz1Loc(), 16.0f);
    glUniform1f(globalLighting->getHighlghtSz2Loc(), 16.0f);
    glUniform1f(globalLighting->getHighlghtSz3Loc(), 16.0f);
                
    /** Major cleanup of rendering section, less reinitialization, now it's just reassignments, to be moved to initial build to avoid having to constantly recalculate model, will be stored in and called from the shape */
    for (const auto& pair : ShapeMap)
    {
        const std::string& name = pair.first;
        if (name == "tableTop1")
        {
            /*glBindFramebuffer(GL_FRAMEBUFFER, ShapeMap.at(name)->getFbo());
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, ShapeMap.at(name)->getDepthMap(), 0);
            glDrawBuffer(GL_NONE);
            glReadBuffer(GL_NONE);
            glBindFramebuffer(GL_FRAMEBUFFER, 0);

            glUseProgram(shaderCollection.at("shadowDepthProgram")->getShaderProgram());
            glUniform1i(glGetUniformLocation(shaderCollection.at("shadowDepthProgram")->getShaderProgram(), "depthMap"), 0);
            
            glm::mat4 lightProjection, lightView;
            glm::mat4 lightSpaceMatrix;
            float near_plane = 1.0f; 
            float far_plane = 7.5f;

            lightProjection = glm::ortho(-10.0f, 10.0f, -10.0f, 10.0f, near_plane, far_plane);
            lightView = glm::lookAt(lightPos, glm::vec3(0.0f), glm::vec3(0.0, 1.0, 0.0));
            lightSpaceMatrix = lightProjection * lightView;

            glUniformMatrix4fv(glGetUniformLocation(shaderCollection.at("shadowDepthProgram")->getShaderProgram(), "lightSpaceMatrix"),1 , GL_FALSE, &lightSpaceMatrix[0][0]);

            const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
            glViewport(0, 0, SHADOW_WIDTH, SHADOW_HEIGHT);
            glBindFramebuffer(GL_FRAMEBUFFER, ShapeMap.at(name)->getFbo());
            glClear(GL_DEPTH_BUFFER_BIT);
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());
            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindFramebuffer(GL_FRAMEBUFFER, 0);

            // reset viewport
            glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);*/

            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(4.5f, 0.025f, 1.5f));
            rotation = glm::rotate(glm::radians(0.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(0.0f, 0.0f, -0.5f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));
            
            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
        };

        if (name == "mousePad")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.9f, 0.025f, 0.7f));
            rotation = glm::rotate(glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(3.5f, 0.06f, 0.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
        };

        if (name == "tableTop2")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(5.0f, 0.025f, 5.0f));
            rotation = glm::rotate(glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(0.0f, 2.0f, -5.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
        };

        if (name == "keyboard")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(2.25f, 0.025f, 0.65f));
            rotation = glm::rotate(glm::radians(0.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(0.0f, 0.06f, 0.26f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            // Retrieves and passes transform matrices to the Shader program
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());
            glActiveTexture(GL_TEXTURE0);

            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());
            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
        }; 

        if (name == "presonusBody")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(1.0f, 1.0f, .9f));
            rotation = glm::rotate(glm::radians(-90.0f), glm::vec3(1.0, 0.0f, 0.0f));
            location = glm::vec3(-3.5f, 0.25f, 0.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
        };

        if (name == "presonusSlider")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.11f, 0.07f, 0.07f));
            rotation = glm::rotate(glm::radians(6.4f), glm::vec3(1.0f, 0.0f, 0.0f));
            glm::mat4 rotation2 = glm::rotate(glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(-4.008f, 0.40f, 0.0f);
            translation = glm::translate(location);
            model = translation * rotation * rotation2 * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "sliderBacking")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.020f, 0.75f, 0.05f));
            rotation = glm::rotate(glm::radians(95.8f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(-4.008f, 0.33f, 0.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "speakerRight")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.60f, 0.9f, 0.60f));
            rotation = glm::rotate(glm::radians(-50.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(4.0f, 2.926f, -4.9f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "speakerLeft")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.60f, 0.9f, 0.60f));
            rotation = glm::rotate(glm::radians(50.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(-4.0f, 2.926f, -4.9f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            // Retrieves and passes transform matrices to the Shader program
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));
            
            glBindVertexArray(ShapeMap.at(name)->getVao());
            
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "focusRite")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(1.1f, .25f, 0.75f));
            rotation = glm::rotate(glm::radians(50.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            location = glm::vec3(-3.0f, 2.295f, -6.5f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        // Focusrite Knobs
        if (name == "focusRiteKnobCollection")
        {
            glUseProgram(globalLighting->getShaderProgram());
            {
                scale = glm::scale(glm::vec3(0.065f, 0.065f, 0.151f));
                rotation = glm::rotate(glm::radians(-130.0f), glm::vec3(0.0f, 1.0f, 0.0f));
                location = glm::vec3(-1.973f, 2.408, -6.58f);
                translation = glm::translate(location);
                model = translation * rotation * scale;

                glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
                glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
                glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
                glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

                glBindVertexArray(ShapeMap.at(name)->getVao());

                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

                glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            }
            {
                scale = glm::scale(glm::vec3(0.065f, 0.065f, 0.149f));
                rotation = glm::rotate(glm::radians(-130.0f), glm::vec3(0.0f, 1.0f, 0.0f));
                location = glm::vec3(-1.844f, 2.408f, -6.729f);
                translation = glm::translate(location);
                model = translation * rotation * scale;

                glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
                glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
                glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
                glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

                glBindVertexArray(ShapeMap.at(name)->getVao());

                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

                glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            }
            {
                scale = glm::scale(glm::vec3(0.135f, 0.135f, 0.125f));
                rotation = glm::rotate(glm::radians(-130.0f), glm::vec3(0.0f, 1.0f, 0.0f));
                location = glm::vec3(-2.16f, 2.281f, -6.37f);
                translation = glm::translate(location);
                model = translation * rotation * scale;

                glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
                glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
                glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
                glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

                glBindVertexArray(ShapeMap.at(name)->getVao());

                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

                glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            }
            {
                scale = glm::scale(glm::vec3(0.065f, 0.065f, 0.200f));
                rotation = glm::rotate(glm::radians(-130.0f), glm::vec3(0.0f, 1.0f, 0.0f));
                location = glm::vec3(-2.5f, 2.408f, -6.05f);
                translation = glm::translate(location);
                model = translation * rotation * scale;

                glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
                glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
                glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
                glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

                glBindVertexArray(ShapeMap.at(name)->getVao());

                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

                glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            }
            {
                scale = glm::scale(glm::vec3(0.065f, 0.065f, 0.200f));
                rotation = glm::rotate(glm::radians(-130.0f), glm::vec3(0.0f, 1.0f, 0.0f));
                location = glm::vec3(-2.89f, 2.408f, -5.59f);
                translation = glm::translate(location);
                model = translation * rotation * scale;

                glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
                glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
                glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
                glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

                glBindVertexArray(ShapeMap.at(name)->getVao());

                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

                glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
                glBindVertexArray(0);
            }
        };

        if (name == "presonusKnob")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(.068f, 0.068f, 0.25f));
            rotation = glm::rotate(glm::radians(-83.6f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(-3.74f, 0.65f, -0.59f);
            translation = glm::translate(location);
            model = translation * rotation * scale;
   
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "monitorStand")
        {
            glUseProgram(globalLighting->getShaderProgram());
            scale = glm::scale(glm::vec3(0.35f, 0.35f, 7.0f));
            rotation = glm::rotate(glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(0.0f, 2.05f, -8.8f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };

        if (name == "monitor1")
        {
            glUniform1f(globalLighting->getAmbStrLoc(), 0.01f);

            scale = glm::scale(glm::vec3(3.4f, 0.001f, 2.0f));
            rotation = glm::rotate(glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(0.0f, 4.45f, -8.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;



            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glUniform1f(globalLighting->getAmbStrLoc(), 0.01f);
            glBindVertexArray(0);
        };

        if (name == "monitor2")
        {
            glUniform1f(globalLighting->getAmbStrLoc(), 0.02f);
            scale = glm::scale(glm::vec3(3.4f, 0.001f, 2.0f));
            rotation = glm::rotate(glm::radians(91.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            location = glm::vec3(0.0f, 8.40f, -8.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glUniform1f(globalLighting->getAmbStrLoc(), 0.01f);
            glBindVertexArray(0);
        };

        
        if (name == "lightPyramid")
        {
            const float angularVelocity = glm::radians(45.0f);
            if (gIsLampOrbiting)
            {
                glm::vec4 newPosition = glm::rotate(angularVelocity * gDeltaTime, glm::vec3(0.0f, 0.125f, 0.0f)) * glm::vec4(gLightPosition, 1.0f);
                gLightPosition.x = newPosition.x;
                gLightPosition.y = newPosition.y;
                gLightPosition.z = newPosition.z;
            }
            glUniform1f(globalLighting->getAmbStrLoc(), 0.02f);// 1. Scales the object by 2

            scale = glm::scale(glm::vec3(1.0f, 1.0f, 1.0f));
            // Model matrix: transformations are applied right-to-left order
            model = glm::translate(gLightPosition) * glm::scale(gLightScale);

            // camera/view transformation
            glm::mat4 view = camera.GetViewMatrix();

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

            glUniform2fv(UVScaleLoc, 1, glm::value_ptr(uvScale));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glUniform1f(globalLighting->getAmbStrLoc(), 0.01f);
            glBindVertexArray(0);
        };
        /*
        if (name == "lightPyramid")
        {   // Set the shader to be used
            // LearnOpenGL uses a format like shader.use();

            glUseProgram(globalLighting->getShaderProgram());

            scale = glm::scale(glm::vec3(0.5f, 0.5f, 0.5f));
            rotation = glm::rotate(glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
            //model = glm::rotate(model, (float)glfwGetTime() * -10.0f, glm::normalize(glm::vec3(1.0, 0.0, 1.0)));
            location = glm::vec3(3.0f, 4.5f, 6.0f);
            translation = glm::translate(location);
            model = translation * rotation * scale;

            projLoc = glGetUniformLocation(shaderCollection.at("lotsOfLight")->getShaderProgram(), "projection");
            viewLoc = glGetUniformLocation(shaderCollection.at("lotsOfLight")->getShaderProgram(), "view");
            modelLoc = glGetUniformLocation(shaderCollection.at("lotsOfLight")->getShaderProgram(), "model");

            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        };*/
    };

    for (const auto& pair : ShapeMap)
    {
        
        const std::string& name = pair.first;


       
        
        if (name == "CubeMap") 
        {
            globalLighting->setValues(shaderCollection.at("cubeMapShaderProgram")->getShaderProgram());
            glUseProgram(globalLighting->getShaderProgram());
            view = camera.GetViewMatrix();
            model = glm::mat4(1.0f);
            cameraPos = glm::vec3(camera.Position);

            projLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "projection");
            viewLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "view");
            modelLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "model");
            cameraPosLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "cameraPos");      
            
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
            glUniformMatrix3fv(cameraPosLoc, 1, GL_FALSE, glm::value_ptr(cameraPos));
            
            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_CUBE_MAP, ShapeMap.at(name)->getTextureId());
                
            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            glBindVertexArray(0);
        }

        if (name == "Skybox")
        {
            glDepthFunc(GL_LEQUAL);
            globalLighting->setValues(shaderCollection.at("skyBoxShaderProgram")->getShaderProgram());
            glUseProgram(globalLighting->getShaderProgram());

            glm::mat4 view = glm::mat4(glm::mat3(camera.GetViewMatrix()));

            viewLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "view");
            projLoc = glGetUniformLocation(globalLighting->getShaderProgram(), "projection");

            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));

            glBindVertexArray(ShapeMap.at(name)->getVao());

            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_CUBE_MAP, ShapeMap.at(name)->getTextureId());

            glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(ShapeMap.at(name)->getVertices().size()));
            
            glBindVertexArray(0);
            glDepthFunc(GL_LESS);
        };
    };

    // Deactivate the Vertex Array Object
    glBindVertexArray(0);
    // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
    glfwSwapBuffers(window);    // Flips the the back buffer with the front buffer every frame
}

bool UCreateTexture(
    const char* filename,
    GLuint& textureId,
    Shapes& ShapeMap,
    std::string name)
{
    int width, height, channels;
    unsigned char* image = stbi_load(filename, &width, &height, &channels, 0);
    if (image)
    {
        flipImageVertically(image, width, height, channels);

        glGenTextures(1, ShapeMap.at(name)->getTextureIdPtr());
        glBindTexture(GL_TEXTURE_2D, ShapeMap.at(name)->getTextureId());

        // set the texture wrapping parameters
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        
        // set texture filtering parameters
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        
        if (channels == 1) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
        }
        else if (channels == 3) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
        }
        else if (channels == 4) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
        }
        else {
            cout << "Not implemented to handle image with " << channels << " channels" << endl;
            return false;
        }

        glGenerateMipmap(GL_TEXTURE_2D);

        stbi_image_free(image);
        glBindTexture(GL_TEXTURE_2D, 0); // Unbind the texture

        return true;
    }
    // Error loading the image
    return false;
}

bool loadCubemap(
    vector<std::string> faces, 
    GLuint TextureID, 
    Shapes& ShapeMap, 
    std::string name)
{
    glGenTextures(1, ShapeMap.at(name)->getTextureIdPtr());
    glBindTexture(GL_TEXTURE_CUBE_MAP, ShapeMap.at(name)->getTextureId());;

    int width, height, nrComponents;
    for (unsigned int i = 0; i < faces.size(); i++)
    {
        unsigned char* data = stbi_load(faces[i].c_str(), &width, &height, &nrComponents, 0);
        if (data)
        {
            glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
            stbi_image_free(data);
        }
        else
        {
            std::cout << "Cubemap texture failed to load at path: " << faces[i] << std::endl;
            stbi_image_free(data);
        }
    }

    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

    return true;
}

void flipImageVertically(
    unsigned char* image,
    int width,
    int height,
    int channels)
{
    for (int j = 0; j < height / 2; ++j)
    {
        int index1 = j * width * channels;
        int index2 = (height - 1 - j) * width * channels;
        for (int i = width * channels; i > 0; --i)
        {
            unsigned char tmp = image[index1];
            image[index1] = image[index2];
            image[index2] = tmp;
            ++index1;
            ++index2;
        }
    }
}

bool UInitialize(
    int,
    char* [],
    GLFWwindow** window)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 16);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // GLFW: window creation
    * window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL);
    if (*window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }
    glfwMakeContextCurrent(*window);
    glfwSetFramebufferSizeCallback(*window, UResizeWindow);
    glfwSetCursorPosCallback(*window, UMousePositionCallback);
    glfwSetScrollCallback(*window, UMouseScrollCallback);
    glfwSetMouseButtonCallback(*window, UMouseButtonCallback);

    // tell GLFW to capture our mouse
    glfwSetInputMode(*window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // GLEW: initialize
    // Note: if using GLEW version 1.13 or earlier
    glewExperimental = GL_TRUE;
    GLenum GlewInitResult = glewInit();

    if (GLEW_OK != GlewInitResult)
    {
        std::cerr << glewGetErrorString(GlewInitResult) << std::endl;
        return false;
    }

    // Displays GPU OpenGL version
    cout << "INFO: OpenGL Version: " << glGetString(GL_VERSION) << endl;
    return true;
}

void UResizeWindow(
    GLFWwindow* window,
    int width,
    int height)
{
    glViewport(0, 0, width, height);
}

void UProcessInput(
    GLFWwindow* window)
{
    static const float cameraSpeed = 3.5f;

    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(FORWARD, gDeltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(BACKWARD, gDeltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(LEFT, gDeltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(RIGHT, gDeltaTime);
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        camera.ProcessKeyboard(UP, gDeltaTime);
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        camera.ProcessKeyboard(DOWN, gDeltaTime);
    // Check for P key to be pressed, wait until release before repeating
    if (glfwGetKey(window, GLFW_KEY_P) == GLFW_PRESS)
    {
        if (!pKeyPressed)
        {
            camera.ToggleProjectionMode();
            pKeyPressed = true;  // Set the flag to indicate 'P' was pressed
        }
    }
    else
    {
        pKeyPressed = false; // Reset the flag when 'P' is released
    }

    // Pause and resume lamp orbiting
    static bool isLKeyDown = false;
    if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS && !gIsLampOrbiting)
        gIsLampOrbiting = true;
    else if (glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS && gIsLampOrbiting)
        gIsLampOrbiting = false;
}

void UMousePositionCallback(
    GLFWwindow* window,
    double xpos,
    double ypos)
{
    if (firstMouse)
    {
        lastX = static_cast<float>(xpos);
        lastY = static_cast<float>(ypos);
        firstMouse = false;
    }

    float xoffset = static_cast<float>(xpos) - lastX;
    float yoffset = lastY - static_cast<float>(ypos); // reversed since y-coordinates go from bottom to top

    lastX = static_cast<float>(xpos);
    lastY = static_cast<float>(ypos);

    camera.ProcessMouseMovement(xoffset, yoffset);
}

void UMouseScrollCallback(
    GLFWwindow* window,
    double xoffset,
    double yoffset)
{
    camera.ProcessMouseScroll(static_cast<float>(yoffset));
}

void UMouseButtonCallback(
    GLFWwindow* window,
    int button,
    int action,
    int mods)
{
    switch (button)
    {
    case GLFW_MOUSE_BUTTON_LEFT:
    {
        if (action == GLFW_PRESS)
            cout << "Left mouse button pressed" << endl;
        else
            cout << "Left mouse button released" << endl;
    }
    break;

    case GLFW_MOUSE_BUTTON_MIDDLE:
    {
        if (action == GLFW_PRESS)
            cout << "Middle mouse button pressed" << endl;
        else
            cout << "Middle mouse button released" << endl;
    }
    break;

    case GLFW_MOUSE_BUTTON_RIGHT:
    {
        if (action == GLFW_PRESS)
            cout << "Right mouse button pressed" << endl;
        else
            cout << "Right mouse button released" << endl;
    }
    break;

    default:
        cout << "Unhandled mouse button event" << endl;
        break;
    }
}