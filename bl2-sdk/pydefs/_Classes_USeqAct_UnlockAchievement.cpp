#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_UnlockAchievement()
{
    class_< USeqAct_UnlockAchievement, bases< USequenceAction >  , boost::noncopyable>("USeqAct_UnlockAchievement", no_init)
        .def_readwrite("AchievementId", &USeqAct_UnlockAchievement::AchievementId)
        .def_readwrite("MinimumPlayersRequired", &USeqAct_UnlockAchievement::MinimumPlayersRequired)
        .def("StaticClass", &USeqAct_UnlockAchievement::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_UnlockAchievement::eventActivated)
        .staticmethod("StaticClass")
  ;
}