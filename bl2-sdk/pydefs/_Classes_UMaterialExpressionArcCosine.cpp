#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcCosine()
{
    class_< UMaterialExpressionArcCosine, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionArcCosine", no_init)
        .def_readwrite("Input", &UMaterialExpressionArcCosine::Input)
        .def("StaticClass", &UMaterialExpressionArcCosine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}