#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APickupableMeshActor()
{
    class_< APickupableMeshActor, bases< AActor >  , boost::noncopyable>("APickupableMeshActor", no_init)
        .def_readwrite("MyTarget", &APickupableMeshActor::MyTarget)
        .def_readwrite("MoveSpeed", &APickupableMeshActor::MoveSpeed)
        .def_readwrite("RotateSpeed", &APickupableMeshActor::RotateSpeed)
        .def_readwrite("PawnEyeHeightAdjustment", &APickupableMeshActor::PawnEyeHeightAdjustment)
        .def("StaticClass", &APickupableMeshActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetTarget", &APickupableMeshActor::SetTarget)
        .staticmethod("StaticClass")
  ;
}