#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerClassAchievementUnlockData(py::object m)
{
    py::class_< FPlayerClassAchievementUnlockData >(m, "FPlayerClassAchievementUnlockData")
        .def_readwrite("UnlockType", &FPlayerClassAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FPlayerClassAchievementUnlockData::Achievement)
        .def_readwrite("IntData", &FPlayerClassAchievementUnlockData::IntData)
  ;
}