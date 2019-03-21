#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAchievementUtility()
{
    py::class_< UAchievementUtility,  UObject   >("UAchievementUtility")
        .def("StaticClass", &UAchievementUtility::StaticClass, py::return_value_policy::reference)
        .def("ShouldUnlockAchievementFromUnlockType", &UAchievementUtility::ShouldUnlockAchievementFromUnlockType)
        .staticmethod("StaticClass")
  ;
}