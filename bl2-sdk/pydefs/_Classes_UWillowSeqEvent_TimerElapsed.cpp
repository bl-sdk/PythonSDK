#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_TimerElapsed()
{
    class_< UWillowSeqEvent_TimerElapsed, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_TimerElapsed", no_init)
        .def_readwrite("Event", &UWillowSeqEvent_TimerElapsed::Event)
        .def("StaticClass", &UWillowSeqEvent_TimerElapsed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}