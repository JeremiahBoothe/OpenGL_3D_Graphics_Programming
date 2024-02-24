cmake_minimum_required(VERSION 2.6)

project(soil C)

include_directories(inc)

ADD_LIBRARY( soil STATIC
  src/image_helper.c
  src/stb_image_aug.c
  src/image_DXT.c
  src/SOIL.c
  )
  
target_include_directories(soil INTERFACE $<INSTALL_INTERFACE:include>)

install(TARGETS soil
    EXPORT soilTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)

install(FILES inc/SOIL/SOIL.h
    DESTINATION include/SOIL)

# Prepare and install package files
set(soil_VERSION "2021.4.22")

export(TARGETS soil FILE "${PROJECT_BINARY_DIR}/soilTargets.cmake")

export(PACKAGE soil)
# Create the soilConfig.cmake and soilConfigVersion files
configure_file(soilConfig.cmake.in        "${PROJECT_BINARY_DIR}/soilConfig.cmake"        @ONLY)
configure_file(soilConfigVersion.cmake.in "${PROJECT_BINARY_DIR}/soilConfigVersion.cmake" @ONLY)
# Install the soilConfig.cmake and soilConfigVersion.cmake
install(FILES
    "${PROJECT_BINARY_DIR}/soilConfig.cmake"
    "${PROJECT_BINARY_DIR}/soilConfigVersion.cmake"
    DESTINATION "share/soil")
# Install the export set for use with the install-tree
install(EXPORT soilTargets DESTINATION
    "share/soil")