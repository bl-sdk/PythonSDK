#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldAmbientColor()
{
    class_< UMaterialExpressionWorldAmbientColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionWorldAmbientColor", no_init)
        .def("StaticClass", &UMaterialExpressionWorldAmbientColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}