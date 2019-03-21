#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimNotifyEvent()
{
    class_< FAnimNotifyEvent >("FAnimNotifyEvent", no_init)
        .def_readwrite("Time", &FAnimNotifyEvent::Time)
        .def_readwrite("Notify", &FAnimNotifyEvent::Notify)
        .def_readwrite("Duration", &FAnimNotifyEvent::Duration)
  ;
}