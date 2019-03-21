#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorSpawnable()
{
    py::class_< ASkeletalMeshActorSpawnable,  ASkeletalMeshActor   >("ASkeletalMeshActorSpawnable")
        .def("StaticClass", &ASkeletalMeshActorSpawnable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}