#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshMAT()
{
    py::class_< UActorFactorySkeletalMeshMAT,  UActorFactorySkeletalMesh   >("UActorFactorySkeletalMeshMAT")
        .def("StaticClass", &UActorFactorySkeletalMeshMAT::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}