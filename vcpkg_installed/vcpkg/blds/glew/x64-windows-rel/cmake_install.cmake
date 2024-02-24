# Install script for directory: D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/pkgs/glew_x64-windows")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "OFF")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/lib/glew32.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/bin/glew32.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/glew.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/bin/glew32.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/GL" TYPE FILE FILES
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake/../../include/GL/wglew.h"
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake/../../include/GL/glew.h"
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake/../../include/GL/glxew.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/glew/glew-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/glew/glew-targets.cmake"
         "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/CMakeFiles/Export/7a894a12241bfddc41ca6be6d0e647bd/glew-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/glew/glew-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/glew/glew-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/glew" TYPE FILE FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/CMakeFiles/Export/7a894a12241bfddc41ca6be6d0e647bd/glew-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/glew" TYPE FILE FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/CMakeFiles/Export/7a894a12241bfddc41ca6be6d0e647bd/glew-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/glew" TYPE FILE FILES
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake/glew-config.cmake"
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/src/glew-80f5997feb.clean/build/cmake/CopyImportedTargetProperties.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/glew/x64-windows-rel/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
