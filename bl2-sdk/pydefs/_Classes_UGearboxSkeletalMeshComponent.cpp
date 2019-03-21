#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSkeletalMeshComponent(py::object m)
{
    py::class_< UGearboxSkeletalMeshComponent,  USkeletalMeshComponent   >(m, "UGearboxSkeletalMeshComponent")
        .def_readwrite("FOV", &UGearboxSkeletalMeshComponent::FOV)
        .def("StaticClass", &UGearboxSkeletalMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetFOV", &UGearboxSkeletalMeshComponent::SetFOV)
          ;
}