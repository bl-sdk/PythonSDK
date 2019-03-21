#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceFieldSpawnable()
{
    py::class_< ANxForceFieldSpawnable,  AActor   >("ANxForceFieldSpawnable")
        .def_readwrite("ForceFieldComponent", &ANxForceFieldSpawnable::ForceFieldComponent)
        .def("StaticClass", &ANxForceFieldSpawnable::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ANxForceFieldSpawnable::OnToggle)
        .staticmethod("StaticClass")
  ;
}