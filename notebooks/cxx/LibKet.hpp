#pragma onc

#pragma cling add_include_path("/home/jovyan/LibKet/external/armadillo")
#pragma cling add_include_path("/home/jovyan/LibKet/libket")

#pragma cling add_library_path("/home/jovyan/LibKet/build/external/armadillo")
#pragma cling add_library_path("/home/jovyan/LibKet/build/external/QuEST/QuEST")

#pragma cling load("libarmadillo.so")
#pragma cling load("libQuEST.so")

#include "/home/jovyan/LibKet/libket/LibLet.hpp"
