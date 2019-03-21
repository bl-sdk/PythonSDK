#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorMATSpawnable()
{
    py::class_< ASkeletalMeshActorMATSpawnable,  ASkeletalMeshActorMAT   >("ASkeletalMeshActorMATSpawnable")
        .def("StaticClass", &ASkeletalMeshActorMATSpawnable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}