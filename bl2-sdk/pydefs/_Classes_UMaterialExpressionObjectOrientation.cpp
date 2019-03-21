#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectOrientation()
{
    class_< UMaterialExpressionObjectOrientation, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionObjectOrientation", no_init)
        .def("StaticClass", &UMaterialExpressionObjectOrientation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}