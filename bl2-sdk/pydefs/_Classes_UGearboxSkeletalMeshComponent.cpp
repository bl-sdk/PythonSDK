#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSkeletalMeshComponent(py::module &m)
{
    py::class_< UGearboxSkeletalMeshComponent,  USkeletalMeshComponent   >(m, "UGearboxSkeletalMeshComponent")
		.def_static("StaticClass", &UGearboxSkeletalMeshComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FOV", &UGearboxSkeletalMeshComponent::FOV)
        .def("SetFOV", &UGearboxSkeletalMeshComponent::SetFOV)
          ;
}