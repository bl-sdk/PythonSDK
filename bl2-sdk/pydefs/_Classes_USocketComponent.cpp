#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USocketComponent()
{
    py::class_< USocketComponent,  UPrimitiveComponent   >("USocketComponent")
        .def_readwrite("SocketName", &USocketComponent::SocketName)
        .def("StaticClass", &USocketComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}