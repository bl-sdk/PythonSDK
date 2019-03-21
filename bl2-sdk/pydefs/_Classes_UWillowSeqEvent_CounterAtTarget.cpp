#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CounterAtTarget()
{
    class_< UWillowSeqEvent_CounterAtTarget, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_CounterAtTarget", no_init)
        .def_readwrite("Event", &UWillowSeqEvent_CounterAtTarget::Event)
        .def("StaticClass", &UWillowSeqEvent_CounterAtTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}