#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestDepth()
{
    class_< UMaterialExpressionDestDepth, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDestDepth", no_init)
        .def("StaticClass", &UMaterialExpressionDestDepth::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}