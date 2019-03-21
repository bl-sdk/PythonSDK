#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWindDirectionAndSpeed()
{
    class_< UMaterialExpressionWindDirectionAndSpeed, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionWindDirectionAndSpeed", no_init)
        .def("StaticClass", &UMaterialExpressionWindDirectionAndSpeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}