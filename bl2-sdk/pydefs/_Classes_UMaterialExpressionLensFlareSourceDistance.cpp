#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareSourceDistance()
{
    class_< UMaterialExpressionLensFlareSourceDistance, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLensFlareSourceDistance", no_init)
        .def("StaticClass", &UMaterialExpressionLensFlareSourceDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}