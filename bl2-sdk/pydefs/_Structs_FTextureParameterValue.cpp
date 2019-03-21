#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureParameterValue()
{
    class_< FTextureParameterValue >("FTextureParameterValue", no_init)
        .def_readwrite("ParameterName", &FTextureParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FTextureParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FTextureParameterValue::ExpressionGUID)
  ;
}