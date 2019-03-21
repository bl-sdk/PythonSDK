#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedScalarParameter()
{
    py::class_< FCoordinatedScalarParameter >("FCoordinatedScalarParameter")
        .def_readwrite("ParamName", &FCoordinatedScalarParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedScalarParameter::ParamValueOverTime)
        .def_readwrite("BoundsScale", &FCoordinatedScalarParameter::BoundsScale)
  ;
}