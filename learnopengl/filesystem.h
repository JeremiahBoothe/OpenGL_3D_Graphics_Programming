#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <string>
#include <cstdlib>

std::string userpath = "D:/My\\ Documents/Programming\\ Projects/VisualStudio/CS330/JB_CS_330/SkyBox";


class FileSystem
{
private:
    typedef std::string(*Builder) (const std::string& path);

public:
    static std::string getPath(const std::string& path)
    {
        static std::string(*pathBuilder)(std::string const&) = getPathBuilder();
        return (*pathBuilder)(path);
    }

private:
    static std::string const& getRoot()
    {
        const char* logl_root = "userpath";
        static char const* envRoot = getenv("LOGL_ROOT_PATH"); 
        static char const* givenRoot = (envRoot != nullptr ? envRoot : logl_root);
        static std::string root = (givenRoot != nullptr ? givenRoot : "");
        return root;
    }

    //static std::string(*foo (std::string const &)) getPathBuilder()
    static Builder getPathBuilder()
    {
        if (getRoot() != "")
            return &FileSystem::getPathRelativeRoot;
        else
            return &FileSystem::getPathRelativeBinary;
    }

    static std::string getPathRelativeRoot(const std::string& path)
    {
        return getRoot() + std::string("/") + path;
    }

    static std::string getPathRelativeBinary(const std::string& path)
    {
        return "../../../" + path;
    }


};

// FILESYSTEM_H
#endif
