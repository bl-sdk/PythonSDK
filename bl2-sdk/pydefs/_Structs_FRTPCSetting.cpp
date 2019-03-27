#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRTPCSetting(py::module &m)
{
    py::class_< FRTPCSetting >(m, "FRTPCSetting")
        .def_readwrite("Target", &FRTPCSetting::Target)
        .def_readwrite("AkRtpc", &FRTPCSetting::AkRtpc)
        .def_readwrite("ValueAtMaxRange", &FRTPCSetting::ValueAtMaxRange)
        .def_readwrite("ValueWithinVolume", &FRTPCSetting::ValueWithinVolume)
        .def_readwrite("FadeDistance", &FRTPCSetting::FadeDistance)
        .def_readwrite("LastEvalValue", &FRTPCSetting::LastEvalValue)
  ;
}