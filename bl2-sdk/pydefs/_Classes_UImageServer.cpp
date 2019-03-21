#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UImageServer()
{
    py::class_< UImageServer,  UWebApplication   >("UImageServer")
        .def("StaticClass", &UImageServer::StaticClass, py::return_value_policy::reference)
        .def("eventQuery", &UImageServer::eventQuery)
        .staticmethod("StaticClass")
  ;
}