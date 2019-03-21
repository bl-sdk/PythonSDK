#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVisibilityTrackKey()
{
    class_< FVisibilityTrackKey >("FVisibilityTrackKey", no_init)
        .def_readwrite("Time", &FVisibilityTrackKey::Time)
        .def_readwrite("Action", &FVisibilityTrackKey::Action)
        .def_readwrite("ActiveCondition", &FVisibilityTrackKey::ActiveCondition)
  ;
}