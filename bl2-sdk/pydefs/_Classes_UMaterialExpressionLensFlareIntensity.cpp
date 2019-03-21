#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareIntensity()
{
    class_< UMaterialExpressionLensFlareIntensity, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLensFlareIntensity", no_init)
        .def("StaticClass", &UMaterialExpressionLensFlareIntensity::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}