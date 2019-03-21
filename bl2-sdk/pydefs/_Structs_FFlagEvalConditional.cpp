#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlagEvalConditional()
{
    py::class_< FFlagEvalConditional >("FFlagEvalConditional")
        .def_readwrite("FlagEvalType", &FFlagEvalConditional::FlagEvalType)
        .def_readwrite("FlagDefinition", &FFlagEvalConditional::FlagDefinition)
        .def_readwrite("TimeSeconds", &FFlagEvalConditional::TimeSeconds)
  ;
}