#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorBasedOnExtremeContent(py::object m)
{
    py::class_< ASkeletalMeshActorBasedOnExtremeContent,  ASkeletalMeshActor   >(m, "ASkeletalMeshActorBasedOnExtremeContent")
        .def_readwrite("ExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("StaticClass", &ASkeletalMeshActorBasedOnExtremeContent::StaticClass, py::return_value_policy::reference)
        .def("SetMaterialBasedOnExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &ASkeletalMeshActorBasedOnExtremeContent::eventPostBeginPlay)
          ;
}