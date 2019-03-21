#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkyLightToggleable()
{
    py::class_< ASkyLightToggleable,  ALight   >("ASkyLightToggleable")
        .def("StaticClass", &ASkyLightToggleable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}