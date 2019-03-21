#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTalkActData(py::object m)
{
    py::class_< FTalkActData >(m, "FTalkActData")
        .def_readwrite("OutputDelay", &FTalkActData::OutputDelay)
        .def_readwrite("TalkData", &FTalkActData::TalkData)
        .def_readwrite("TalkerVariable", &FTalkActData::TalkerVariable)
        .def_readwrite("OutputAction", &FTalkActData::OutputAction)
  ;
}