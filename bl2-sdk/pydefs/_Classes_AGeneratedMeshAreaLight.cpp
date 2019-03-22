#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGeneratedMeshAreaLight(py::module &m)
{
    py::class_< AGeneratedMeshAreaLight,  ASpotLight   >(m, "AGeneratedMeshAreaLight")
        .def("StaticClass", &AGeneratedMeshAreaLight::StaticClass, py::return_value_policy::reference)
          ;
}