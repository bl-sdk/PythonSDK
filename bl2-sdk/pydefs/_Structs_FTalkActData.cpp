#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTalkActData()
{
    class_< FTalkActData >("FTalkActData", no_init)
        .def_readwrite("OutputDelay", &FTalkActData::OutputDelay)
        .def_readwrite("TalkData", &FTalkActData::TalkData)
        .def_readwrite("TalkerVariable", &FTalkActData::TalkerVariable)
        .def_readwrite("OutputAction", &FTalkActData::OutputAction)
  ;
}