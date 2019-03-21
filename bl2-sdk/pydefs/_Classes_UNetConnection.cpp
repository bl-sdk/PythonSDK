#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetConnection(py::object m)
{
    py::class_< UNetConnection,  UPlayer   >(m, "UNetConnection")
        .def_readonly("UnknownData00", &UNetConnection::UnknownData00)
        .def_readwrite("Children", &UNetConnection::Children)
        .def_readonly("UnknownData01", &UNetConnection::UnknownData01)
        .def("StaticClass", &UNetConnection::StaticClass, py::return_value_policy::reference)
          ;
}