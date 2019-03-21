#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVertexColor()
{
    class_< UMaterialExpressionVertexColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionVertexColor", no_init)
        .def("StaticClass", &UMaterialExpressionVertexColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}