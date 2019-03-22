#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshRenderingComponent(py::module &m)
{
    py::class_< UGBXNavMeshRenderingComponent,  UPrimitiveComponent   >(m, "UGBXNavMeshRenderingComponent")
        .def_readwrite("MeshSpacingHullsToDraw", &UGBXNavMeshRenderingComponent::MeshSpacingHullsToDraw)
        .def_readwrite("NavMeshRenderingData", &UGBXNavMeshRenderingComponent::NavMeshRenderingData)
        .def("StaticClass", &UGBXNavMeshRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}