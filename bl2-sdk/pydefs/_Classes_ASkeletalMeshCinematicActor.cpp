#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshCinematicActor()
{
    py::class_< ASkeletalMeshCinematicActor,  ASkeletalMeshActor   >("ASkeletalMeshCinematicActor")
        .def("StaticClass", &ASkeletalMeshCinematicActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}