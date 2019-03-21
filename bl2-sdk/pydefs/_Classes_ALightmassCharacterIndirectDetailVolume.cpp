#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightmassCharacterIndirectDetailVolume()
{
    py::class_< ALightmassCharacterIndirectDetailVolume,  AVolume   >("ALightmassCharacterIndirectDetailVolume")
        .def("StaticClass", &ALightmassCharacterIndirectDetailVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}