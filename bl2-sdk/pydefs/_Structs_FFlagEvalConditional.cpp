#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFlagEvalConditional()
{
    class_< FFlagEvalConditional >("FFlagEvalConditional", no_init)
        .def_readwrite("FlagEvalType", &FFlagEvalConditional::FlagEvalType)
        .def_readwrite("FlagDefinition", &FFlagEvalConditional::FlagDefinition)
        .def_readwrite("TimeSeconds", &FFlagEvalConditional::TimeSeconds)
  ;
}