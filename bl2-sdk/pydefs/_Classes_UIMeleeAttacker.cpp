#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMeleeAttacker()
{
    class_< UIMeleeAttacker, bases< UInterface >  , boost::noncopyable>("UIMeleeAttacker", no_init)
        .def("StaticClass", &UIMeleeAttacker::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldIgnoreInstigatorVelocity", &UIMeleeAttacker::ShouldIgnoreInstigatorVelocity)
        .def("GetMeleeState", &UIMeleeAttacker::GetMeleeState)
        .def("HasActorAlreadyBeenHitByMelee", &UIMeleeAttacker::HasActorAlreadyBeenHitByMelee)
        .def("AddActorToListOfHitActors", &UIMeleeAttacker::AddActorToListOfHitActors)
        .def("EndMeleeOverTime", &UIMeleeAttacker::EndMeleeOverTime)
        .def("BeginMeleeOverTime", &UIMeleeAttacker::BeginMeleeOverTime)
        .def("GetMeleeAttackerMass", &UIMeleeAttacker::GetMeleeAttackerMass)
        .def("GetMeleeTraceSourceLocationAndRotation", &UIMeleeAttacker::GetMeleeTraceSourceLocationAndRotation)
        .def("GetMeleeInstigator", &UIMeleeAttacker::GetMeleeInstigator, return_value_policy< reference_existing_object >())
        .def("GetMeleeTraceSourceActor", &UIMeleeAttacker::GetMeleeTraceSourceActor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}