#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FToggleTrackKey()
{
    class_< FToggleTrackKey >("FToggleTrackKey", no_init)
        .def_readwrite("Time", &FToggleTrackKey::Time)
        .def_readwrite("ToggleAction", &FToggleTrackKey::ToggleAction)
  ;
}