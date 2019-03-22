#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAudioComponentParam(py::module &m)
{
    py::class_< FAudioComponentParam >(m, "FAudioComponentParam")
        .def_readwrite("ParamName", &FAudioComponentParam::ParamName)
        .def_readwrite("FloatParam", &FAudioComponentParam::FloatParam)
        .def_readwrite("WaveParam", &FAudioComponentParam::WaveParam)
  ;
}