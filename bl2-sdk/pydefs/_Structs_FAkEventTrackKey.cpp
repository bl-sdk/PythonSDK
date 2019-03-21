#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAkEventTrackKey()
{
    class_< FAkEventTrackKey >("FAkEventTrackKey", no_init)
        .def_readwrite("Time", &FAkEventTrackKey::Time)
        .def_readwrite("Event", &FAkEventTrackKey::Event)
  ;
}