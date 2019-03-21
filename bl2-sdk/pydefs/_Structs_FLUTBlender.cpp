#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLUTBlender()
{
    class_< FLUTBlender >("FLUTBlender", no_init)
        .def_readwrite("LUTTextures", &FLUTBlender::LUTTextures)
        .def_readwrite("LUTWeights", &FLUTBlender::LUTWeights)
  ;
}