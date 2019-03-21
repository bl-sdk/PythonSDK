#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUVBlend()
{
    class_< UMaterialExpressionMeshSubUVBlend, bases< UMaterialExpressionTextureSample >  , boost::noncopyable>("UMaterialExpressionMeshSubUVBlend", no_init)
        .def("StaticClass", &UMaterialExpressionMeshSubUVBlend::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}