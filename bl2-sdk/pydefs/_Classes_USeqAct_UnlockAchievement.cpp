#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_UnlockAchievement(py::module &m)
{
    py::class_< USeqAct_UnlockAchievement,  USequenceAction   >(m, "USeqAct_UnlockAchievement")
		.def_static("StaticClass", &USeqAct_UnlockAchievement::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AchievementId", &USeqAct_UnlockAchievement::AchievementId)
        .def_readwrite("MinimumPlayersRequired", &USeqAct_UnlockAchievement::MinimumPlayersRequired)
        .def("eventActivated", &USeqAct_UnlockAchievement::eventActivated)
          ;
}