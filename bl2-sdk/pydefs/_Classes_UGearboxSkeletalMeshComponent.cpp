#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSkeletalMeshComponent()
{
    py::class_< UGearboxSkeletalMeshComponent,  USkeletalMeshComponent   >("UGearboxSkeletalMeshComponent")
        .def_readwrite("FOV", &UGearboxSkeletalMeshComponent::FOV)
        .def("StaticClass", &UGearboxSkeletalMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetFOV", &UGearboxSkeletalMeshComponent::SetFOV)
        .staticmethod("StaticClass")
  ;
}