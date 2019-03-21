#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_UnlockAchievementForAllPlayers()
{
    class_< UPlayerBehavior_UnlockAchievementForAllPlayers, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_UnlockAchievementForAllPlayers", no_init)
        .def_readwrite("Achievement", &UPlayerBehavior_UnlockAchievementForAllPlayers::Achievement)
        .def_readwrite("MinimumPlayersRequired", &UPlayerBehavior_UnlockAchievementForAllPlayers::MinimumPlayersRequired)
        .def("StaticClass", &UPlayerBehavior_UnlockAchievementForAllPlayers::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_UnlockAchievementForAllPlayers::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}