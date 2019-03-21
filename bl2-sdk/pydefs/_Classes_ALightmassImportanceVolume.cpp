#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightmassImportanceVolume(py::object m)
{
    py::class_< ALightmassImportanceVolume,  AVolume   >(m, "ALightmassImportanceVolume")
        .def("StaticClass", &ALightmassImportanceVolume::StaticClass, py::return_value_policy::reference)
          ;
}