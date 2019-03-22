#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GiveChallengeToPlayer(py::module &m)
{
    py::class_< UBehavior_GiveChallengeToPlayer,  UBehaviorBase   >(m, "UBehavior_GiveChallengeToPlayer")
        .def_readwrite("Challenge", &UBehavior_GiveChallengeToPlayer::Challenge)
        .def_readwrite("Challenges", &UBehavior_GiveChallengeToPlayer::Challenges)
        .def("ApplyBehaviorToContext", &UBehavior_GiveChallengeToPlayer::ApplyBehaviorToContext)
          ;
}