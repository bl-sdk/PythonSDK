#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTexture2DMipMap()
{
    class_< FTexture2DMipMap >("FTexture2DMipMap", no_init)
        .def_readwrite("Data", &FTexture2DMipMap::Data)
        .def_readwrite("SizeX", &FTexture2DMipMap::SizeX)
        .def_readwrite("SizeY", &FTexture2DMipMap::SizeY)
  ;
}