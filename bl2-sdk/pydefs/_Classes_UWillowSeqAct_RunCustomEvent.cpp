#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_RunCustomEvent()
{
    class_< UWillowSeqAct_RunCustomEvent, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_RunCustomEvent", no_init)
        .def_readwrite("CustomEventName", &UWillowSeqAct_RunCustomEvent::CustomEventName)
        .def_readwrite("EventInstigator", &UWillowSeqAct_RunCustomEvent::EventInstigator)
        .def_readwrite("OtherEventParticipant", &UWillowSeqAct_RunCustomEvent::OtherEventParticipant)
        .def("StaticClass", &UWillowSeqAct_RunCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}