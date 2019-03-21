#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAchievementUnlockData(py::object m)
{
    py::class_< FAchievementUnlockData >(m, "FAchievementUnlockData")
        .def_readwrite("UnlockType", &FAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FAchievementUnlockData::Achievement)
        .def_readwrite("StringData", &FAchievementUnlockData::StringData)
        .def_readwrite("IntData", &FAchievementUnlockData::IntData)
  ;
}