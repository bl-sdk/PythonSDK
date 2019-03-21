#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowElevatorRenderingComponent()
{
    py::class_< UWillowElevatorRenderingComponent,  UPrimitiveComponent   >("UWillowElevatorRenderingComponent")
        .def("StaticClass", &UWillowElevatorRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}