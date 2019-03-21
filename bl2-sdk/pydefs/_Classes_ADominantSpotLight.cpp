#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantSpotLight()
{
    py::class_< ADominantSpotLight,  ASpotLight   >("ADominantSpotLight")
        .def("StaticClass", &ADominantSpotLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}