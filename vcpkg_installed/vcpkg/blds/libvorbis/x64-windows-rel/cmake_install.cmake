# Install script for directory: D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/src/v1.3.7-1480004d18.clean

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/pkgs/libvorbis_x64-windows")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/x64-windows-rel/vorbis.pc"
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/x64-windows-rel/vorbisenc.pc"
    "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/x64-windows-rel/vorbisfile.pc"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/x64-windows-rel/lib/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libvorbis/x64-windows-rel/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")