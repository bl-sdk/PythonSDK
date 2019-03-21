#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APickupableMeshActor()
{
    py::class_< APickupableMeshActor,  AActor   >("APickupableMeshActor")
        .def_readwrite("MyTarget", &APickupableMeshActor::MyTarget)
        .def_readwrite("MoveSpeed", &APickupableMeshActor::MoveSpeed)
        .def_readwrite("RotateSpeed", &APickupableMeshActor::RotateSpeed)
        .def_readwrite("PawnEyeHeightAdjustment", &APickupableMeshActor::PawnEyeHeightAdjustment)
        .def("StaticClass", &APickupableMeshActor::StaticClass, py::return_value_policy::reference)
        .def("SetTarget", &APickupableMeshActor::SetTarget)
        .staticmethod("StaticClass")
  ;
}