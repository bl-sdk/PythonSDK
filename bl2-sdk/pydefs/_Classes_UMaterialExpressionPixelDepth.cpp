#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPixelDepth()
{
    class_< UMaterialExpressionPixelDepth, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionPixelDepth", no_init)
        .def("StaticClass", &UMaterialExpressionPixelDepth::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}