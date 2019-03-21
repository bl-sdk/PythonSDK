#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBulletTimerEvent()
{
    class_< FBulletTimerEvent >("FBulletTimerEvent", no_init)
        .def_readwrite("Time", &FBulletTimerEvent::Time)
        .def_readwrite("Response", &FBulletTimerEvent::Response)
  ;
}