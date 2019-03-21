#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageImpulseDirection()
{
    class_< UMaterialExpressionFoliageImpulseDirection, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFoliageImpulseDirection", no_init)
        .def("StaticClass", &UMaterialExpressionFoliageImpulseDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}