#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRtpcParameterValue(py::module &m)
{
    py::class_< FRtpcParameterValue >(m, "FRtpcParameterValue")
        .def_readwrite("AkRtpc", &FRtpcParameterValue::AkRtpc)
        .def_readwrite("Value", &FRtpcParameterValue::Value)
  ;
}