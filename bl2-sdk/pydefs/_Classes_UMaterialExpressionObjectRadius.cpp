#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectRadius()
{
    class_< UMaterialExpressionObjectRadius, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionObjectRadius", no_init)
        .def("StaticClass", &UMaterialExpressionObjectRadius::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}