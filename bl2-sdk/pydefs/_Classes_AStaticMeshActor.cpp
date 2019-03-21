#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActor()
{
    py::class_< AStaticMeshActor,  AActor   >("AStaticMeshActor")
        .def_readwrite("StaticMeshComponent", &AStaticMeshActor::StaticMeshComponent)
        .def("StaticClass", &AStaticMeshActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}