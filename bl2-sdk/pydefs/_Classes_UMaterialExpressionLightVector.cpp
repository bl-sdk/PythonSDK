#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightVector()
{
    class_< UMaterialExpressionLightVector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLightVector", no_init)
        .def("StaticClass", &UMaterialExpressionLightVector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}