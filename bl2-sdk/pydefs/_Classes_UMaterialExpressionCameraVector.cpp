#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraVector()
{
    class_< UMaterialExpressionCameraVector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCameraVector", no_init)
        .def("StaticClass", &UMaterialExpressionCameraVector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}