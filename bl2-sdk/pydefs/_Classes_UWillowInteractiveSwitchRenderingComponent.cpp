#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInteractiveSwitchRenderingComponent(py::object m)
{
    py::class_< UWillowInteractiveSwitchRenderingComponent,  UPrimitiveComponent   >(m, "UWillowInteractiveSwitchRenderingComponent")
        .def("StaticClass", &UWillowInteractiveSwitchRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}