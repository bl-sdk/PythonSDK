#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_TimerElapsed()
{
    py::class_< UWillowSeqEvent_TimerElapsed,  USequenceEvent   >("UWillowSeqEvent_TimerElapsed")
        .def_readwrite("Event", &UWillowSeqEvent_TimerElapsed::Event)
        .def("StaticClass", &UWillowSeqEvent_TimerElapsed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}