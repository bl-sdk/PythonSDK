#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelloWeb()
{
    py::class_< UHelloWeb,  UWebApplication   >("UHelloWeb")
        .def("StaticClass", &UHelloWeb::StaticClass, py::return_value_policy::reference)
        .def("eventQuery", &UHelloWeb::eventQuery)
        .def("Init", &UHelloWeb::Init)
        .staticmethod("StaticClass")
  ;
}