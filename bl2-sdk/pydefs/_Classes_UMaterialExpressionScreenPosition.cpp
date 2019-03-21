#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScreenPosition()
{
    class_< UMaterialExpressionScreenPosition, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionScreenPosition", no_init)
        .def("StaticClass", &UMaterialExpressionScreenPosition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}