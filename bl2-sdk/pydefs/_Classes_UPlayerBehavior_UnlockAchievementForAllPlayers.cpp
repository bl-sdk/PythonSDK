#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_UnlockAchievementForAllPlayers(py::module &m)
{
    py::class_< UPlayerBehavior_UnlockAchievementForAllPlayers,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_UnlockAchievementForAllPlayers")
		.def_static("StaticClass", &UPlayerBehavior_UnlockAchievementForAllPlayers::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Achievement", &UPlayerBehavior_UnlockAchievementForAllPlayers::Achievement)
        .def_readwrite("MinimumPlayersRequired", &UPlayerBehavior_UnlockAchievementForAllPlayers::MinimumPlayersRequired)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_UnlockAchievementForAllPlayers::ApplyBehaviorToContext)
          ;
}