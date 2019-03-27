#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHybridNavigationAreaDebugRenderingComponent(py::module &m)
{
    py::class_< UHybridNavigationAreaDebugRenderingComponent,  UPrimitiveComponent   >(m, "UHybridNavigationAreaDebugRenderingComponent")
		.def_static("StaticClass", &UHybridNavigationAreaDebugRenderingComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DebugSphereRadius", &UHybridNavigationAreaDebugRenderingComponent::DebugSphereRadius)
          ;
}