#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxGameInfo()
{
    py::class_< AGearboxGameInfo,  AGameInfo   >("AGearboxGameInfo")
        .def("StaticClass", &AGearboxGameInfo::StaticClass, py::return_value_policy::reference)
        .def("eventPostLogin", &AGearboxGameInfo::eventPostLogin)
        .staticmethod("StaticClass")
  ;
}