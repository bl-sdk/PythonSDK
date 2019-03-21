#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarParameterValue()
{
    class_< FScalarParameterValue >("FScalarParameterValue", no_init)
        .def_readwrite("ParameterName", &FScalarParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FScalarParameterValue::ExpressionGUID)
  ;
}