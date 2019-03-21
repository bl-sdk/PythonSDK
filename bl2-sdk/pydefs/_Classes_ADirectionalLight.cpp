#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADirectionalLight()
{
    py::class_< ADirectionalLight,  ALight   >("ADirectionalLight")
        .def("StaticClass", &ADirectionalLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}