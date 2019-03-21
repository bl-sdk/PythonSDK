#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGeneratedMeshAreaLight()
{
    py::class_< AGeneratedMeshAreaLight,  ASpotLight   >("AGeneratedMeshAreaLight")
        .def("StaticClass", &AGeneratedMeshAreaLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}