#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSplat()
{
    class_< UMaterialExpressionTextureSplat, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTextureSplat", no_init)
        .def_readwrite("BackdropTexture", &UMaterialExpressionTextureSplat::BackdropTexture)
        .def_readwrite("OverlayTexture", &UMaterialExpressionTextureSplat::OverlayTexture)
        .def_readwrite("UVs", &UMaterialExpressionTextureSplat::UVs)
        .def_readwrite("Offset", &UMaterialExpressionTextureSplat::Offset)
        .def_readwrite("Scale", &UMaterialExpressionTextureSplat::Scale)
        .def("StaticClass", &UMaterialExpressionTextureSplat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}