#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightmassCharacterIndirectDetailVolume(py::module &m)
{
    py::class_< ALightmassCharacterIndirectDetailVolume,  AVolume   >(m, "ALightmassCharacterIndirectDetailVolume")
        .def("StaticClass", &ALightmassCharacterIndirectDetailVolume::StaticClass, py::return_value_policy::reference)
          ;
}