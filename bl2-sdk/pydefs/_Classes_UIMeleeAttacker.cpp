#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMeleeAttacker(py::module &m)
{
    py::class_< UIMeleeAttacker,  UInterface   >(m, "UIMeleeAttacker")
        .def("StaticClass", &UIMeleeAttacker::StaticClass, py::return_value_policy::reference)
        .def("ShouldIgnoreInstigatorVelocity", &UIMeleeAttacker::ShouldIgnoreInstigatorVelocity)
        .def("GetMeleeState", &UIMeleeAttacker::GetMeleeState)
        .def("HasActorAlreadyBeenHitByMelee", &UIMeleeAttacker::HasActorAlreadyBeenHitByMelee)
        .def("AddActorToListOfHitActors", &UIMeleeAttacker::AddActorToListOfHitActors)
        .def("EndMeleeOverTime", &UIMeleeAttacker::EndMeleeOverTime)
        .def("BeginMeleeOverTime", &UIMeleeAttacker::BeginMeleeOverTime)
        .def("GetMeleeAttackerMass", &UIMeleeAttacker::GetMeleeAttackerMass)
        .def("GetMeleeTraceSourceLocationAndRotation", &UIMeleeAttacker::GetMeleeTraceSourceLocationAndRotation)
        .def("GetMeleeInstigator", &UIMeleeAttacker::GetMeleeInstigator, py::return_value_policy::reference)
        .def("GetMeleeTraceSourceActor", &UIMeleeAttacker::GetMeleeTraceSourceActor, py::return_value_policy::reference)
          ;
}