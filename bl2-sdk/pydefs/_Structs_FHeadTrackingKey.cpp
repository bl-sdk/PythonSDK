#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHeadTrackingKey()
{
    py::class_< FHeadTrackingKey >("FHeadTrackingKey")
        .def_readwrite("Time", &FHeadTrackingKey::Time)
        .def_readwrite("Action", &FHeadTrackingKey::Action)
  ;
}