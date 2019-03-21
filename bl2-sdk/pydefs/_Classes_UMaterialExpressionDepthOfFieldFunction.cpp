#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthOfFieldFunction()
{
    class_< UMaterialExpressionDepthOfFieldFunction, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDepthOfFieldFunction", no_init)
        .def_readwrite("FunctionValue", &UMaterialExpressionDepthOfFieldFunction::FunctionValue)
        .def_readwrite("Depth", &UMaterialExpressionDepthOfFieldFunction::Depth)
        .def("StaticClass", &UMaterialExpressionDepthOfFieldFunction::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}