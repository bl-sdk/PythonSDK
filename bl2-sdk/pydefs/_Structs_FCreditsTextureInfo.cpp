#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCreditsTextureInfo(py::module &m)
{
    py::class_< FCreditsTextureInfo >(m, "FCreditsTextureInfo")
        .def_readwrite("TexturePath", &FCreditsTextureInfo::TexturePath)
  ;
}