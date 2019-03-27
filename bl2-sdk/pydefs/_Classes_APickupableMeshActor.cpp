#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APickupableMeshActor(py::module &m)
{
    py::class_< APickupableMeshActor,  AActor   >(m, "APickupableMeshActor")
		.def_static("StaticClass", &APickupableMeshActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyTarget", &APickupableMeshActor::MyTarget)
        .def_readwrite("MoveSpeed", &APickupableMeshActor::MoveSpeed)
        .def_readwrite("RotateSpeed", &APickupableMeshActor::RotateSpeed)
        .def_readwrite("PawnEyeHeightAdjustment", &APickupableMeshActor::PawnEyeHeightAdjustment)
        .def("SetTarget", &APickupableMeshActor::SetTarget)
          ;
}