#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLight()
{
    py::class_< ADominantDirectionalLight,  ALight   >("ADominantDirectionalLight")
        .def("StaticClass", &ADominantDirectionalLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}