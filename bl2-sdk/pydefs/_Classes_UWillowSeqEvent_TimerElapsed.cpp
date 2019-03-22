#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_TimerElapsed(py::module &m)
{
    py::class_< UWillowSeqEvent_TimerElapsed,  USequenceEvent   >(m, "UWillowSeqEvent_TimerElapsed")
        .def_readwrite("Event", &UWillowSeqEvent_TimerElapsed::Event)
          ;
}