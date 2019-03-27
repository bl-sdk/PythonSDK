#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmitterDynamicParameter(py::module &m)
{
    py::class_< FEmitterDynamicParameter >(m, "FEmitterDynamicParameter")
        .def_readwrite("ParamName", &FEmitterDynamicParameter::ParamName)
        .def_readwrite("ValueMethod", &FEmitterDynamicParameter::ValueMethod)
        .def_readwrite("ParamValue", &FEmitterDynamicParameter::ParamValue)
  ;
}