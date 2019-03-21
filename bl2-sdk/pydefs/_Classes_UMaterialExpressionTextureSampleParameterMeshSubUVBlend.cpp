#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUVBlend()
{
    class_< UMaterialExpressionTextureSampleParameterMeshSubUVBlend, bases< UMaterialExpressionTextureSampleParameter >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterMeshSubUVBlend", no_init)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUVBlend::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}