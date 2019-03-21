#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedVectorParameter()
{
    py::class_< FCoordinatedVectorParameter >("FCoordinatedVectorParameter")
        .def_readwrite("ParamName", &FCoordinatedVectorParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedVectorParameter::ParamValueOverTime)
  ;
}