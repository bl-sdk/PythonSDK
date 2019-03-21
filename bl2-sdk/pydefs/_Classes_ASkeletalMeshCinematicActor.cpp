#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshCinematicActor(py::object m)
{
    py::class_< ASkeletalMeshCinematicActor,  ASkeletalMeshActor   >(m, "ASkeletalMeshCinematicActor")
        .def("StaticClass", &ASkeletalMeshCinematicActor::StaticClass, py::return_value_policy::reference)
          ;
}