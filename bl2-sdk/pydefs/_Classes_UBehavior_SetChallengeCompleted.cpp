#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetChallengeCompleted(py::module &m)
{
    py::class_< UBehavior_SetChallengeCompleted,  UBehaviorBase   >(m, "UBehavior_SetChallengeCompleted")
        .def_readwrite("UnlockForPlayer", &UBehavior_SetChallengeCompleted::UnlockForPlayer)
        .def_readwrite("ChallengeDef", &UBehavior_SetChallengeCompleted::ChallengeDef)
        .def("ApplyBehaviorToContext", &UBehavior_SetChallengeCompleted::ApplyBehaviorToContext)
          ;
}