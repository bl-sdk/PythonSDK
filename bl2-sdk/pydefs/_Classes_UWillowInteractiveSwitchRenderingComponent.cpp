#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInteractiveSwitchRenderingComponent()
{
    py::class_< UWillowInteractiveSwitchRenderingComponent,  UPrimitiveComponent   >("UWillowInteractiveSwitchRenderingComponent")
        .def("StaticClass", &UWillowInteractiveSwitchRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}