#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoRecConnection()
{
    py::class_< UDemoRecConnection,  UNetConnection   >("UDemoRecConnection")
        .def("StaticClass", &UDemoRecConnection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}