#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillEventResponseData()
{
    class_< FSkillEventResponseData >("FSkillEventResponseData", no_init)
        .def_readwrite("EventType", &FSkillEventResponseData::EventType)
        .def_readwrite("Action", &FSkillEventResponseData::Action)
  ;
}