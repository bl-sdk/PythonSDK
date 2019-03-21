#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDynamicNavMeshConnectionPointRenderingComponent()
{
    py::class_< UWillowDynamicNavMeshConnectionPointRenderingComponent,  UPrimitiveComponent   >("UWillowDynamicNavMeshConnectionPointRenderingComponent")
        .def_readwrite("ConnectionValidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionValidColor)
        .def_readwrite("ConnectionInvalidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionInvalidColor)
        .def("StaticClass", &UWillowDynamicNavMeshConnectionPointRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}