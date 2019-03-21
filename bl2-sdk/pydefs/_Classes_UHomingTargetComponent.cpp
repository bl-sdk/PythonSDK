#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHomingTargetComponent()
{
    py::class_< UHomingTargetComponent,  UPrimitiveComponent   >("UHomingTargetComponent")
        .def_readwrite("SocketName", &USocketComponent::SocketName)
        .def("StaticClass", &UHomingTargetComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}