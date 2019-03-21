#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidVertexColor()
{
    class_< UMaterialExpressionSPHFluidVertexColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSPHFluidVertexColor", no_init)
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidVertexColor::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidVertexColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}