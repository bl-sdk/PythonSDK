#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScalarParameter()
{
    class_< UMaterialExpressionScalarParameter, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionScalarParameter", no_init)
        .def_readwrite("DefaultValue", &UMaterialExpressionScalarParameter::DefaultValue)
        .def_readwrite("ParameterName", &UMaterialExpressionParameter::ParameterName)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionParameter::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionScalarParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}