#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAwardForAllPlayers()
{
    py::class_< UBehavior_UnlockAvatarAwardForAllPlayers,  UBehaviorBase   >("UBehavior_UnlockAvatarAwardForAllPlayers")
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAwardForAllPlayers::AvatarAward)
        .def("StaticClass", &UBehavior_UnlockAvatarAwardForAllPlayers::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAwardForAllPlayers::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}