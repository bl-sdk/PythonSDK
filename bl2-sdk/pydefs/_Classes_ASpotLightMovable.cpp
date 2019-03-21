#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightMovable()
{
    py::class_< ASpotLightMovable,  ASpotLight   >("ASpotLightMovable")
        .def("StaticClass", &ASpotLightMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}