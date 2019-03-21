#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEventTrackKey()
{
    class_< FEventTrackKey >("FEventTrackKey", no_init)
        .def_readwrite("Time", &FEventTrackKey::Time)
        .def_readwrite("EventName", &FEventTrackKey::EventName)
  ;
}