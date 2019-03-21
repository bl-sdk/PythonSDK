#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomSkeletalMeshComponent()
{
    py::class_< UCustomSkeletalMeshComponent,  USkeletalMeshComponent   >("UCustomSkeletalMeshComponent")
        .def_readwrite("DefaultSkeletalMesh", &UCustomSkeletalMeshComponent::DefaultSkeletalMesh)
        .def("StaticClass", &UCustomSkeletalMeshComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}