#pragma once

// Set include paths for external subprojects
#pragma cling add_include_path("/home/jovyan/LibKet/external")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/CLI11/include")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/CLI11/include")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/eigen")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/eigen")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/eigen/unsupported")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/deps/libqasm/src/library")
#pragma cling add_include_path("/home/jovyan/LibKet/external/OpenQL/src")
#pragma cling add_include_path("/home/jovyan/LibKet/external/QuEST/QuEST/include")
#pragma cling add_include_path("/home/jovyan/LibKet/external/armadillo/include")
#pragma cling add_include_path("/home/jovyan/LibKet/external/optim/header_only_version")
#pragma cling add_include_path("/home/jovyan/LibKet/external/pegtl/include")
#pragma cling add_include_path("/home/jovyan/LibKet/external/qx-simulator/src")
#pragma cling add_include_path("/home/jovyan/LibKet/external/qx-simulator/src/xpu-0.1.5")
#pragma cling add_include_path("/home/jovyan/LibKet/external/universal/include")

// Set library paths for external subprojects
#pragma cling add_library_path("/home/jovyan/LibKet/build/external/armadillo")
#pragma cling add_library_path("/home/jovyan/LibKet/build/external/QuEST/QuEST")

// Load external libraries
#pragma cling load("libarmadillo.so")
#pragma cling load("libQuEST.so")
  
// Set include path for Python embedded interpreter
#pragma cling add_include_path("/srv/conda/envs/notebook/include/python3.7m")

// Set library paths for Python embedded interpreter
#pragma cling add_library_path("$CONDA_PREFIX/lib")

// Load Python embedded interpreter
#pragma cling load("libpython3")

// Set include paths for LibKet C++ API
#pragma cling add_include_path("/home/jovyan/LibKet/libket")
#pragma cling add_include_path("/home/jovyan/LibKet/build/libket")

// Set inclulde paths for fake std::future and std::async
#pragma cling add_include_path("/home/jovyan/notebooks/cxx")

// Include main header file for C++ API
#include "/home/jovyan/LibKet/libket/LibKet.hpp"
