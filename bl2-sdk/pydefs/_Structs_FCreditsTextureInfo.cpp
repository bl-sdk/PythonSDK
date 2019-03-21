#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCreditsTextureInfo()
{
    py::class_< FCreditsTextureInfo >("FCreditsTextureInfo")
        .def_readwrite("TexturePath", &FCreditsTextureInfo::TexturePath)
  ;
}