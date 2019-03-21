#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAudioComponentParam()
{
    py::class_< FAudioComponentParam >("FAudioComponentParam")
        .def_readwrite("ParamName", &FAudioComponentParam::ParamName)
        .def_readwrite("FloatParam", &FAudioComponentParam::FloatParam)
        .def_readwrite("WaveParam", &FAudioComponentParam::WaveParam)
  ;
}