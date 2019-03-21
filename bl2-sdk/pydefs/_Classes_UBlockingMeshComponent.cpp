#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlockingMeshComponent()
{
    py::class_< UBlockingMeshComponent,  UStaticMeshComponent   >("UBlockingMeshComponent")
        .def("StaticClass", &UBlockingMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetBlockingMeshComponentCollision", &UBlockingMeshComponent::SetBlockingMeshComponentCollision)
        .staticmethod("StaticClass")
  ;
}