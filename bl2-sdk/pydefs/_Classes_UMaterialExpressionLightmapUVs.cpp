#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmapUVs()
{
    class_< UMaterialExpressionLightmapUVs, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLightmapUVs", no_init)
        .def("StaticClass", &UMaterialExpressionLightmapUVs::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}