#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADirectionalLightToggleable()
{
    py::class_< ADirectionalLightToggleable,  ADirectionalLight   >("ADirectionalLightToggleable")
        .def("StaticClass", &ADirectionalLightToggleable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}