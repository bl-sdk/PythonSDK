#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLightMovable()
{
    py::class_< ADominantDirectionalLightMovable,  ADominantDirectionalLight   >("ADominantDirectionalLightMovable")
        .def("StaticClass", &ADominantDirectionalLightMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}