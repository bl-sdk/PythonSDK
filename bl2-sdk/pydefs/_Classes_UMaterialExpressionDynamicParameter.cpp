#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDynamicParameter()
{
    class_< UMaterialExpressionDynamicParameter, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDynamicParameter", no_init)
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionDynamicParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}