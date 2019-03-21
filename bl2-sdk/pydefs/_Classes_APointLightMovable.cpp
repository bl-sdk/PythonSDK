#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLightMovable()
{
    py::class_< APointLightMovable,  APointLight   >("APointLightMovable")
        .def("StaticClass", &APointLightMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}