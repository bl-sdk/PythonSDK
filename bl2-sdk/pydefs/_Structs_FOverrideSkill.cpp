#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOverrideSkill()
{
    py::class_< FOverrideSkill >("FOverrideSkill")
        .def_readwrite("LeaderboardId", &FOverrideSkill::LeaderboardId)
        .def_readwrite("Players", &FOverrideSkill::Players)
        .def_readwrite("Mus", &FOverrideSkill::Mus)
        .def_readwrite("Sigmas", &FOverrideSkill::Sigmas)
  ;
}