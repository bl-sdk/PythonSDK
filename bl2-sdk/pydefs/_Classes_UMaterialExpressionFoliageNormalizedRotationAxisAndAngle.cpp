#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFoliageNormalizedRotationAxisAndAngle()
{
    class_< UMaterialExpressionFoliageNormalizedRotationAxisAndAngle, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFoliageNormalizedRotationAxisAndAngle", no_init)
        .def("StaticClass", &UMaterialExpressionFoliageNormalizedRotationAxisAndAngle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}