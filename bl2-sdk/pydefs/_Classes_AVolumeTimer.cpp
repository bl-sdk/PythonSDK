#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVolumeTimer(py::module &m)
{
    py::class_< AVolumeTimer,  AInfo   >(m, "AVolumeTimer")
        .def_readwrite("V", &AVolumeTimer::V)
        .def("eventTimer", &AVolumeTimer::eventTimer)
        .def("eventPostBeginPlay", &AVolumeTimer::eventPostBeginPlay)
          ;
}