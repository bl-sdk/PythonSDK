#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GiveChallengeToPlayer()
{
    py::class_< UBehavior_GiveChallengeToPlayer,  UBehaviorBase   >("UBehavior_GiveChallengeToPlayer")
        .def_readwrite("Challenge", &UBehavior_GiveChallengeToPlayer::Challenge)
        .def_readwrite("Challenges", &UBehavior_GiveChallengeToPlayer::Challenges)
        .def("StaticClass", &UBehavior_GiveChallengeToPlayer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GiveChallengeToPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}