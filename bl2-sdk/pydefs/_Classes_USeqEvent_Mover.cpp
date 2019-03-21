#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Mover()
{
    class_< USeqEvent_Mover, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Mover", no_init)
        .def_readwrite("StayOpenTime", &USeqEvent_Mover::StayOpenTime)
        .def("StaticClass", &USeqEvent_Mover::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyFinishedOpen", &USeqEvent_Mover::NotifyFinishedOpen)
        .def("NotifyDetached", &USeqEvent_Mover::NotifyDetached)
        .def("NotifyAttached", &USeqEvent_Mover::NotifyAttached)
        .def("NotifyEncroachingOn", &USeqEvent_Mover::NotifyEncroachingOn)
        .def("eventRegisterEvent", &USeqEvent_Mover::eventRegisterEvent)
        .staticmethod("StaticClass")
  ;
}