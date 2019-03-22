#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightmassImportanceVolume(py::module &m)
{
    py::class_< ALightmassImportanceVolume,  AVolume   >(m, "ALightmassImportanceVolume")
          ;
}