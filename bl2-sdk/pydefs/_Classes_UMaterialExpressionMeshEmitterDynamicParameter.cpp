#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterDynamicParameter()
{
    class_< UMaterialExpressionMeshEmitterDynamicParameter, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMeshEmitterDynamicParameter", no_init)
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionMeshEmitterDynamicParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}