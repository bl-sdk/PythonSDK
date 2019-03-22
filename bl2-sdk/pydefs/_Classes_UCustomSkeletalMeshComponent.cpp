#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomSkeletalMeshComponent(py::module &m)
{
    py::class_< UCustomSkeletalMeshComponent,  USkeletalMeshComponent   >(m, "UCustomSkeletalMeshComponent")
        .def_readwrite("DefaultSkeletalMesh", &UCustomSkeletalMeshComponent::DefaultSkeletalMesh)
          ;
}