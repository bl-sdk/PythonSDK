#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlockingMeshComponent(py::module &m)
{
    py::class_< UBlockingMeshComponent,  UStaticMeshComponent   >(m, "UBlockingMeshComponent")
        .def("StaticClass", &UBlockingMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetBlockingMeshComponentCollision", &UBlockingMeshComponent::SetBlockingMeshComponentCollision)
          ;
}