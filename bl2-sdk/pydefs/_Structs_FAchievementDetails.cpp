#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAchievementDetails(py::object m)
{
    py::class_< FAchievementDetails >(m, "FAchievementDetails")
        .def_readwrite("Id", &FAchievementDetails::Id)
        .def_readwrite("AchievementName", &FAchievementDetails::AchievementName)
        .def_readwrite("Description", &FAchievementDetails::Description)
        .def_readwrite("HowTo", &FAchievementDetails::HowTo)
        .def_readwrite("Image", &FAchievementDetails::Image)
        .def_readwrite("MonthEarned", &FAchievementDetails::MonthEarned)
        .def_readwrite("DayEarned", &FAchievementDetails::DayEarned)
        .def_readwrite("YearEarned", &FAchievementDetails::YearEarned)
        .def_readwrite("DayOfWeekEarned", &FAchievementDetails::DayOfWeekEarned)
        .def_readwrite("GamerPoints", &FAchievementDetails::GamerPoints)
  ;
}