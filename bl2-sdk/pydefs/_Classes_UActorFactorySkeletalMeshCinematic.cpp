#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshCinematic()
{
    py::class_< UActorFactorySkeletalMeshCinematic,  UActorFactorySkeletalMesh   >("UActorFactorySkeletalMeshCinematic")
        .def("StaticClass", &UActorFactorySkeletalMeshCinematic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}