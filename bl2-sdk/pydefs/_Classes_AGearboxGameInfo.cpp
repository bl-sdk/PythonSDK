#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxGameInfo(py::object m)
{
    py::class_< AGearboxGameInfo,  AGameInfo   >(m, "AGearboxGameInfo")
        .def("StaticClass", &AGearboxGameInfo::StaticClass, py::return_value_policy::reference)
        .def("eventPostLogin", &AGearboxGameInfo::eventPostLogin)
          ;
}