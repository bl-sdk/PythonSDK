#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightMapTexture2D(py::module &m)
{
    py::class_< ULightMapTexture2D,  UTexture2D   >(m, "ULightMapTexture2D")
          ;
}