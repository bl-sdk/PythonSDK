#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshRenderingComponent()
{
    py::class_< UNavMeshRenderingComponent,  UPrimitiveComponent   >("UNavMeshRenderingComponent")
        .def("StaticClass", &UNavMeshRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}