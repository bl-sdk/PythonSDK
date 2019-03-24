#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowElevatorRenderingComponent(py::module &m)
{
    py::class_< UWillowElevatorRenderingComponent,  UPrimitiveComponent   >(m, "UWillowElevatorRenderingComponent")
		.def_static("StaticClass", &UWillowElevatorRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}