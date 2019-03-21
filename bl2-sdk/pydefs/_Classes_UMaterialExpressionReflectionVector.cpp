#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionReflectionVector()
{
    class_< UMaterialExpressionReflectionVector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionReflectionVector", no_init)
        .def("StaticClass", &UMaterialExpressionReflectionVector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}