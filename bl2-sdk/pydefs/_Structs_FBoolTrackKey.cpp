#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoolTrackKey()
{
    class_< FBoolTrackKey >("FBoolTrackKey", no_init)
        .def_readwrite("Time", &FBoolTrackKey::Time)
  ;
}