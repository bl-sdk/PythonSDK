#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshRenderingComponent()
{
    py::class_< UGBXNavMeshRenderingComponent,  UPrimitiveComponent   >("UGBXNavMeshRenderingComponent")
        .def_readwrite("MeshSpacingHullsToDraw", &UGBXNavMeshRenderingComponent::MeshSpacingHullsToDraw)
        .def_readwrite("NavMeshRenderingData", &UGBXNavMeshRenderingComponent::NavMeshRenderingData)
        .def("StaticClass", &UGBXNavMeshRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}