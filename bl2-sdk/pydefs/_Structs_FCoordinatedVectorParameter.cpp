#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedVectorParameter(py::module &m)
{
    py::class_< FCoordinatedVectorParameter >(m, "FCoordinatedVectorParameter")
        .def_readwrite("ParamName", &FCoordinatedVectorParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedVectorParameter::ParamValueOverTime)
  ;
}