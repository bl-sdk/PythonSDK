#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldLightColor()
{
    class_< UMaterialExpressionWorldLightColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionWorldLightColor", no_init)
        .def("StaticClass", &UMaterialExpressionWorldLightColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}