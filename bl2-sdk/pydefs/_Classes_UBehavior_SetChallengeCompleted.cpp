#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetChallengeCompleted()
{
    py::class_< UBehavior_SetChallengeCompleted,  UBehaviorBase   >("UBehavior_SetChallengeCompleted")
        .def_readwrite("UnlockForPlayer", &UBehavior_SetChallengeCompleted::UnlockForPlayer)
        .def_readwrite("ChallengeDef", &UBehavior_SetChallengeCompleted::ChallengeDef)
        .def("StaticClass", &UBehavior_SetChallengeCompleted::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetChallengeCompleted::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}