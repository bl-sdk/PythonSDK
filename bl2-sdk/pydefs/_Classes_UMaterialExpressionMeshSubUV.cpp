#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshSubUV()
{
    class_< UMaterialExpressionMeshSubUV, bases< UMaterialExpressionTextureSample >  , boost::noncopyable>("UMaterialExpressionMeshSubUV", no_init)
        .def("StaticClass", &UMaterialExpressionMeshSubUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}