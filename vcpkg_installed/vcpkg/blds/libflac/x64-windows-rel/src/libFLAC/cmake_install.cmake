# Install script for directory: D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libflac/src/1.4.3-00043104ae.clean/src/libFLAC

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/pkgs/libflac_x64-windows")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libflac/x64-windows-rel/src/libFLAC/FLAC.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libflac/x64-windows-rel/objs/FLAC.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "D:/My Documents/Programming Projects/VisualStudio/CS330/JB_CS_330/JBCustomOpenGLSetup/vcpkg_installed/vcpkg/blds/libflac/x64-windows-rel/src/libFLAC/flac.pc")
endif()
