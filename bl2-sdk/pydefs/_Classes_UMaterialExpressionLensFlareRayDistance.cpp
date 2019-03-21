#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRayDistance()
{
    class_< UMaterialExpressionLensFlareRayDistance, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLensFlareRayDistance", no_init)
        .def("StaticClass", &UMaterialExpressionLensFlareRayDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}