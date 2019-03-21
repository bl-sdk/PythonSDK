#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_RemoteEvent()
{
    class_< USeqEvent_RemoteEvent, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_RemoteEvent", no_init)
        .def_readwrite("EventName", &USeqEvent_RemoteEvent::EventName)
        .def("StaticClass", &USeqEvent_RemoteEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqEvent_RemoteEvent::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}