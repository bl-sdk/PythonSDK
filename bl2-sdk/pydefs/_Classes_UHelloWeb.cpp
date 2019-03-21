#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelloWeb(py::object m)
{
    py::class_< UHelloWeb,  UWebApplication   >(m, "UHelloWeb")
        .def("StaticClass", &UHelloWeb::StaticClass, py::return_value_policy::reference)
        .def("eventQuery", &UHelloWeb::eventQuery)
        .def("Init", &UHelloWeb::Init)
          ;
}