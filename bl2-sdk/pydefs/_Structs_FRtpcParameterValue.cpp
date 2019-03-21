#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRtpcParameterValue()
{
    py::class_< FRtpcParameterValue >("FRtpcParameterValue")
        .def_readwrite("AkRtpc", &FRtpcParameterValue::AkRtpc)
        .def_readwrite("Value", &FRtpcParameterValue::Value)
  ;
}