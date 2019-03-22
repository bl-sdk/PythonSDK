#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UImageServer(py::module &m)
{
    py::class_< UImageServer,  UWebApplication   >(m, "UImageServer")
        .def("eventQuery", &UImageServer::eventQuery)
          ;
}