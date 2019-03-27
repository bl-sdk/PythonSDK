#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorBasedOnExtremeContent(py::module &m)
{
    py::class_< ASkeletalMeshActorBasedOnExtremeContent,  ASkeletalMeshActor   >(m, "ASkeletalMeshActorBasedOnExtremeContent")
		.def_static("StaticClass", &ASkeletalMeshActorBasedOnExtremeContent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("SetMaterialBasedOnExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &ASkeletalMeshActorBasedOnExtremeContent::eventPostBeginPlay)
          ;
}