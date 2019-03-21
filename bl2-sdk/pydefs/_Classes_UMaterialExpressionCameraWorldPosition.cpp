#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraWorldPosition()
{
    class_< UMaterialExpressionCameraWorldPosition, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCameraWorldPosition", no_init)
        .def("StaticClass", &UMaterialExpressionCameraWorldPosition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}