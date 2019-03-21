#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParameter()
{
    class_< UMaterialExpressionParameter, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionParameter", no_init)
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}