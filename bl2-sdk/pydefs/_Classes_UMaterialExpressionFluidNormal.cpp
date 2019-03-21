#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFluidNormal()
{
    class_< UMaterialExpressionFluidNormal, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFluidNormal", no_init)
        .def_readwrite("Coordinates", &UMaterialExpressionFluidNormal::Coordinates)
        .def("StaticClass", &UMaterialExpressionFluidNormal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}