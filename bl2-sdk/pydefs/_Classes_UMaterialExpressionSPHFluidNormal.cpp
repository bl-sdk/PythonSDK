#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidNormal()
{
    class_< UMaterialExpressionSPHFluidNormal, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSPHFluidNormal", no_init)
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidNormal::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidNormal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}