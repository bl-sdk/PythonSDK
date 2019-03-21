#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugExposure(py::object m)
{
    py::class_< FDebugExposure >(m, "FDebugExposure")
        .def_readwrite("TargetExposure", &FDebugExposure::TargetExposure)
        .def_readwrite("MyExposure", &FDebugExposure::MyExposure)
        .def_readwrite("InWorldLocation", &FDebugExposure::InWorldLocation)
  ;
}