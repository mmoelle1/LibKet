#pragma once

// Set include paths for external subprojects
#pragma cling add_include_path("/home/jovyan/LibKet/external")
#pragma cling add_include_path("/home/jovyan/LibKet/build/_deps/armadillo-src/include")
#pragma cling add_include_path("/home/jovyan/LibKet/build/_deps/quest-src/QuEST/include")

// Set library paths for external subprojects
#pragma cling add_library_path("/home/jovyan/LibKet/build/_deps/armadillo-build")
#pragma cling add_include_path("/home/jovyan/LibKet/build/_deps/nlopt-build")
#pragma cling add_library_path("/home/jovyan/LibKet/build/_deps/quest-build/QuEST")

// Load external libraries
#pragma cling load("libarmadillo.so")
#pragma cling load("libnlopt.so")
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
#pragma cling add_include_path("/home/jovyan/content/std")

// Include main header file for C++ API
#include "/home/jovyan/LibKet/libket/LibKet.hpp"

// Custom mime type image::png
#include <string>
#include <fstream>
#include "xtl/xbase64.hpp"
namespace image
{
    struct png
    {
        inline png(const std::string& filename)
        {
            std::ifstream fin(filename, std::ios::binary);
            m_buffer << fin.rdbuf();
        }

        std::stringstream m_buffer;
    };

    LibKet::utils::json mime_bundle_repr(const png& i)
    {
        auto bundle = LibKet::utils::json::object();
        bundle["image/png"] = xtl::base64encode(i.m_buffer.str());
        return bundle;
    }
}
