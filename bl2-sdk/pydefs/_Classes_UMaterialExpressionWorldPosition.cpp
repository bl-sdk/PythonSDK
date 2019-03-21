#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldPosition()
{
    class_< UMaterialExpressionWorldPosition, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionWorldPosition", no_init)
        .def("StaticClass", &UMaterialExpressionWorldPosition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}