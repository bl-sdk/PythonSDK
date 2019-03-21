#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVolumeTimer()
{
    py::class_< AVolumeTimer,  AInfo   >("AVolumeTimer")
        .def_readwrite("V", &AVolumeTimer::V)
        .def("StaticClass", &AVolumeTimer::StaticClass, py::return_value_policy::reference)
        .def("eventTimer", &AVolumeTimer::eventTimer)
        .def("eventPostBeginPlay", &AVolumeTimer::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}