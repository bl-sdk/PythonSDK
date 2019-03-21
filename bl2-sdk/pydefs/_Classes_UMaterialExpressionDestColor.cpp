#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestColor()
{
    class_< UMaterialExpressionDestColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDestColor", no_init)
        .def("StaticClass", &UMaterialExpressionDestColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}