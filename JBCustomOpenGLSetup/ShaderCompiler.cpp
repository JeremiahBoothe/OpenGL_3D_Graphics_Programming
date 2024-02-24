#include "ShaderCompiler.h"

unsigned int runShader::CompileShader(unsigned int type, const std::string& source)
{
    unsigned int id = glCreateShader(type); // creates fragment and vertex type shaders
    const char* src = source.c_str();       // points to the beginning of the data
    glShaderSource(id, 1, &src, nullptr);
    glCompileShader(id);

    int result;

    /** Some error handling to help track down errors that might otherwise not show up */
    glGetShaderiv(id, GL_COMPILE_STATUS, &result); // query the shader id for status

    if (result == GL_FALSE) // shader did not compile successfully
    {
        int length;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);         // query for length of log 
        char* message = (char*)_malloca(length * sizeof(char)); // a bit of C level control over the stack to handle log size
        glGetShaderInfoLog(id, length, &length, message);       // to read log
        std::cout
            << "Failed to compile Shader"
            << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") // customize error to type
            << " shader!" << std::endl;
        std::cout
            << message
            << std::endl;

        glDeleteShader(id);  // delete shaders if there was an error
        return 0;
    }

    return id;// returns shader id
}

unsigned int runShader::CreateShader(const std::string& vertexShader, const std::string& fragmentShader)
{
    unsigned int program = glCreateProgram();
    unsigned int vs = runShader::CompileShader(GL_VERTEX_SHADER, vertexShader);     // Tells openGL where the vertex points should be. Passes attributes to other attributes like fragmentShader.
    unsigned int fs = runShader::CompileShader(GL_FRAGMENT_SHADER, fragmentShader); // The pixel shader that colors in the pixels within the vertexShader constraints.
        
    /** Attach shaders, link program and validate program */
    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    glValidateProgram(program);

    /** Cleanup delete values no longer needed for compilation */
    glDeleteShader(vs);
    glDeleteShader(fs);

    return program;  // shader program
};