#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRadialDistance()
{
    class_< UMaterialExpressionLensFlareRadialDistance, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLensFlareRadialDistance", no_init)
        .def("StaticClass", &UMaterialExpressionLensFlareRadialDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}