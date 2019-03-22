#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_RunCustomEvent(py::module &m)
{
    py::class_< UWillowSeqAct_RunCustomEvent,  USequenceAction   >(m, "UWillowSeqAct_RunCustomEvent")
        .def_readwrite("CustomEventName", &UWillowSeqAct_RunCustomEvent::CustomEventName)
        .def_readwrite("EventInstigator", &UWillowSeqAct_RunCustomEvent::EventInstigator)
        .def_readwrite("OtherEventParticipant", &UWillowSeqAct_RunCustomEvent::OtherEventParticipant)
          ;
}