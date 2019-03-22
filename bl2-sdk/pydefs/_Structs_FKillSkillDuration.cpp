#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKillSkillDuration(py::module &m)
{
    py::class_< FKillSkillDuration >(m, "FKillSkillDuration")
        .def_readwrite("Players", &FKillSkillDuration::Players)
        .def_readwrite("Duration", &FKillSkillDuration::Duration)
  ;
}