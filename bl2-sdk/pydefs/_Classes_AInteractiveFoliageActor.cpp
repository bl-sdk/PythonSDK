#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInteractiveFoliageActor()
{
    class_< AInteractiveFoliageActor, bases< AActor >  , boost::noncopyable>("AInteractiveFoliageActor", no_init)
        .def_readwrite("CylinderComponent", &AInteractiveFoliageActor::CylinderComponent)
        .def_readwrite("TouchingActorEntryPosition", &AInteractiveFoliageActor::TouchingActorEntryPosition)
        .def_readwrite("FoliageVelocity", &AInteractiveFoliageActor::FoliageVelocity)
        .def_readwrite("FoliageForce", &AInteractiveFoliageActor::FoliageForce)
        .def_readwrite("FoliagePosition", &AInteractiveFoliageActor::FoliagePosition)
        .def_readwrite("FoliageDamageImpulseScale", &AInteractiveFoliageActor::FoliageDamageImpulseScale)
        .def_readwrite("FoliageTouchImpulseScale", &AInteractiveFoliageActor::FoliageTouchImpulseScale)
        .def_readwrite("FoliageStiffness", &AInteractiveFoliageActor::FoliageStiffness)
        .def_readwrite("FoliageStiffnessQuadratic", &AInteractiveFoliageActor::FoliageStiffnessQuadratic)
        .def_readwrite("FoliageDamping", &AInteractiveFoliageActor::FoliageDamping)
        .def_readwrite("MaxDamageImpulse", &AInteractiveFoliageActor::MaxDamageImpulse)
        .def_readwrite("MaxTouchImpulse", &AInteractiveFoliageActor::MaxTouchImpulse)
        .def_readwrite("MaxForce", &AInteractiveFoliageActor::MaxForce)
        .def_readwrite("Mass", &AInteractiveFoliageActor::Mass)
        .def_readwrite("StaticMeshComponent", &AStaticMeshActor::StaticMeshComponent)
        .def("StaticClass", &AInteractiveFoliageActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTouch", &AInteractiveFoliageActor::eventTouch)
        .def("eventTakeDamage", &AInteractiveFoliageActor::eventTakeDamage)
        .staticmethod("StaticClass")
  ;
}