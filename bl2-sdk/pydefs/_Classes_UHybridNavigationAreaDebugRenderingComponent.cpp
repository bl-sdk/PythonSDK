#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHybridNavigationAreaDebugRenderingComponent(py::module &m)
{
    py::class_< UHybridNavigationAreaDebugRenderingComponent,  UPrimitiveComponent   >(m, "UHybridNavigationAreaDebugRenderingComponent")
        .def_readwrite("DebugSphereRadius", &UHybridNavigationAreaDebugRenderingComponent::DebugSphereRadius)
          ;
}