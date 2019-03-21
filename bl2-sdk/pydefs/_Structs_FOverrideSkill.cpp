#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOverrideSkill()
{
    class_< FOverrideSkill >("FOverrideSkill", no_init)
        .def_readwrite("LeaderboardId", &FOverrideSkill::LeaderboardId)
        .def_readwrite("Players", &FOverrideSkill::Players)
        .def_readwrite("Mus", &FOverrideSkill::Mus)
        .def_readwrite("Sigmas", &FOverrideSkill::Sigmas)
  ;
}