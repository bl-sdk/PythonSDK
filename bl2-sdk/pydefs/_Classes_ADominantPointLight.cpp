#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantPointLight()
{
    py::class_< ADominantPointLight,  APointLight   >("ADominantPointLight")
        .def("StaticClass", &ADominantPointLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}