#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKillSkillDuration()
{
    class_< FKillSkillDuration >("FKillSkillDuration", no_init)
        .def_readwrite("Players", &FKillSkillDuration::Players)
        .def_readwrite("Duration", &FKillSkillDuration::Duration)
  ;
}