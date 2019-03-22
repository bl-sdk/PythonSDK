#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLUTBlender(py::module &m)
{
    py::class_< FLUTBlender >(m, "FLUTBlender")
        .def_readwrite("LUTTextures", &FLUTBlender::LUTTextures)
        .def_readwrite("LUTWeights", &FLUTBlender::LUTWeights)
  ;
}