#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHeadTrackingKey(py::module &m)
{
    py::class_< FHeadTrackingKey >(m, "FHeadTrackingKey")
        .def_readwrite("Time", &FHeadTrackingKey::Time)
        .def_readwrite("Action", &FHeadTrackingKey::Action)
  ;
}