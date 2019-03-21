#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectWorldPosition()
{
    class_< UMaterialExpressionObjectWorldPosition, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionObjectWorldPosition", no_init)
        .def("StaticClass", &UMaterialExpressionObjectWorldPosition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}