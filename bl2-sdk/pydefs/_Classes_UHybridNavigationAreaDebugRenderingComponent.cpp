#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHybridNavigationAreaDebugRenderingComponent()
{
    py::class_< UHybridNavigationAreaDebugRenderingComponent,  UPrimitiveComponent   >("UHybridNavigationAreaDebugRenderingComponent")
        .def_readwrite("DebugSphereRadius", &UHybridNavigationAreaDebugRenderingComponent::DebugSphereRadius)
        .def("StaticClass", &UHybridNavigationAreaDebugRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}