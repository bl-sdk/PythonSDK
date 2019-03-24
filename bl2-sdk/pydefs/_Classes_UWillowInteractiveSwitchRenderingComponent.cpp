#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInteractiveSwitchRenderingComponent(py::module &m)
{
    py::class_< UWillowInteractiveSwitchRenderingComponent,  UPrimitiveComponent   >(m, "UWillowInteractiveSwitchRenderingComponent")
		.def_static("StaticClass", &UWillowInteractiveSwitchRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}