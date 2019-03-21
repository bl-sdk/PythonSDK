#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBulletTimerEvent()
{
    py::class_< FBulletTimerEvent >("FBulletTimerEvent")
        .def_readwrite("Time", &FBulletTimerEvent::Time)
        .def_readwrite("Response", &FBulletTimerEvent::Response)
  ;
}