#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UImageServer(py::object m)
{
    py::class_< UImageServer,  UWebApplication   >(m, "UImageServer")
        .def("StaticClass", &UImageServer::StaticClass, py::return_value_policy::reference)
        .def("eventQuery", &UImageServer::eventQuery)
          ;
}