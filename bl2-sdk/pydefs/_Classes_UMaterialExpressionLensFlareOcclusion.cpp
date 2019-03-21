#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareOcclusion()
{
    class_< UMaterialExpressionLensFlareOcclusion, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLensFlareOcclusion", no_init)
        .def("StaticClass", &UMaterialExpressionLensFlareOcclusion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}