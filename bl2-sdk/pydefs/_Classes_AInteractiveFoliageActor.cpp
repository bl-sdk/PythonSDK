#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInteractiveFoliageActor(py::object m)
{
    py::class_< AInteractiveFoliageActor,  AActor   >(m, "AInteractiveFoliageActor")
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
        .def("StaticClass", &AInteractiveFoliageActor::StaticClass, py::return_value_policy::reference)
        .def("eventTouch", &AInteractiveFoliageActor::eventTouch)
        .def("eventTakeDamage", &AInteractiveFoliageActor::eventTakeDamage)
          ;
}