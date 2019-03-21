#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarParameterInterpStruct()
{
    py::class_< FScalarParameterInterpStruct >("FScalarParameterInterpStruct")
        .def_readwrite("ParameterName", &FScalarParameterInterpStruct::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterInterpStruct::ParameterValue)
        .def_readwrite("InterpTime", &FScalarParameterInterpStruct::InterpTime)
        .def_readwrite("WarmupTime", &FScalarParameterInterpStruct::WarmupTime)
  ;
}