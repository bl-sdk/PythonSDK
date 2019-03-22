#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_ForceFieldExcludeVolume(py::module &m)
{
    py::class_< ARB_ForceFieldExcludeVolume,  AVolume   >(m, "ARB_ForceFieldExcludeVolume")
        .def_readwrite("ForceFieldChannel", &ARB_ForceFieldExcludeVolume::ForceFieldChannel)
        .def("StaticClass", &ARB_ForceFieldExcludeVolume::StaticClass, py::return_value_policy::reference)
          ;
}