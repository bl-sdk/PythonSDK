#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorGBXMatinee()
{
    py::class_< ASkeletalMeshActorGBXMatinee,  ASkeletalMeshActor   >("ASkeletalMeshActorGBXMatinee")
        .def("StaticClass", &ASkeletalMeshActorGBXMatinee::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}