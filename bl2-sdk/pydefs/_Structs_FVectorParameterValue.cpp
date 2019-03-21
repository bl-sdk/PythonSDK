#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorParameterValue()
{
    class_< FVectorParameterValue >("FVectorParameterValue", no_init)
        .def_readwrite("ParameterName", &FVectorParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FVectorParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FVectorParameterValue::ExpressionGUID)
  ;
}