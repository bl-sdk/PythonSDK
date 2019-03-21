#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowElevatorRenderingComponent(py::object m)
{
    py::class_< UWillowElevatorRenderingComponent,  UPrimitiveComponent   >(m, "UWillowElevatorRenderingComponent")
        .def("StaticClass", &UWillowElevatorRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}