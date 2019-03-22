#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelloWeb(py::module &m)
{
    py::class_< UHelloWeb,  UWebApplication   >(m, "UHelloWeb")
        .def("eventQuery", &UHelloWeb::eventQuery)
        .def("Init", &UHelloWeb::Init)
          ;
}