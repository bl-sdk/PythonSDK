#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldNormal()
{
    class_< UMaterialExpressionWorldNormal, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionWorldNormal", no_init)
        .def("StaticClass", &UMaterialExpressionWorldNormal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}