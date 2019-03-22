#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlockingMeshComponent(py::module &m)
{
    py::class_< UBlockingMeshComponent,  UStaticMeshComponent   >(m, "UBlockingMeshComponent")
        .def("SetBlockingMeshComponentCollision", &UBlockingMeshComponent::SetBlockingMeshComponentCollision)
          ;
}