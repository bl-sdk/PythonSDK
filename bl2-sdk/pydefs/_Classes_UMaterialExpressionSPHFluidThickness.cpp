#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSPHFluidThickness()
{
    class_< UMaterialExpressionSPHFluidThickness, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSPHFluidThickness", no_init)
        .def_readwrite("DefaultTexture", &UMaterialExpressionSPHFluidThickness::DefaultTexture)
        .def("StaticClass", &UMaterialExpressionSPHFluidThickness::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}