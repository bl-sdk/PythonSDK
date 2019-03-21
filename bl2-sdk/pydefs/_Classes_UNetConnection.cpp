#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetConnection(py::object m)
{
    py::class_< UNetConnection,  UPlayer   >(m, "UNetConnection")
        .def_readwrite("Children", &UNetConnection::Children)
        .def("StaticClass", &UNetConnection::StaticClass, py::return_value_policy::reference)
          ;
}