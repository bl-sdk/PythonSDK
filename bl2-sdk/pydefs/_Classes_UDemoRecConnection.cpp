#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoRecConnection(py::module &m)
{
    py::class_< UDemoRecConnection,  UNetConnection   >(m, "UDemoRecConnection")
        .def("StaticClass", &UDemoRecConnection::StaticClass, py::return_value_policy::reference)
          ;
}