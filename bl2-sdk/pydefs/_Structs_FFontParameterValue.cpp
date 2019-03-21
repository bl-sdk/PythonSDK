#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFontParameterValue()
{
    class_< FFontParameterValue >("FFontParameterValue", no_init)
        .def_readwrite("ParameterName", &FFontParameterValue::ParameterName)
        .def_readwrite("FontValue", &FFontParameterValue::FontValue)
        .def_readwrite("FontPage", &FFontParameterValue::FontPage)
        .def_readwrite("ExpressionGUID", &FFontParameterValue::ExpressionGUID)
  ;
}