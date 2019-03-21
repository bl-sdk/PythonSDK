#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBasedOnExtremeContent()
{
    py::class_< AStaticMeshActorBasedOnExtremeContent,  AActor   >("AStaticMeshActorBasedOnExtremeContent")
        .def_readwrite("StaticMeshComponent", &AStaticMeshActorBasedOnExtremeContent::StaticMeshComponent)
        .def_readwrite("ExtremeContent", &AStaticMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &AStaticMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("StaticClass", &AStaticMeshActorBasedOnExtremeContent::StaticClass, py::return_value_policy::reference)
        .def("SetMaterialBasedOnExtremeContent", &AStaticMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &AStaticMeshActorBasedOnExtremeContent::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}