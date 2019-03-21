#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterMeshSubUV()
{
    class_< UMaterialExpressionTextureSampleParameterMeshSubUV, bases< UMaterialExpressionTextureSampleParameter >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameterMeshSubUV", no_init)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterMeshSubUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}