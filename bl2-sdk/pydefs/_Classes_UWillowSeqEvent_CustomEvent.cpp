#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CustomEvent()
{
    class_< UWillowSeqEvent_CustomEvent, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_CustomEvent", no_init)
        .def_readwrite("EventName", &UWillowSeqEvent_CustomEvent::EventName)
        .def("StaticClass", &UWillowSeqEvent_CustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}