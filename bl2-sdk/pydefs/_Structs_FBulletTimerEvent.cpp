#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBulletTimerEvent(py::module &m)
{
    py::class_< FBulletTimerEvent >(m, "FBulletTimerEvent")
        .def_readwrite("Time", &FBulletTimerEvent::Time)
        .def_readwrite("Response", &FBulletTimerEvent::Response)
  ;
}