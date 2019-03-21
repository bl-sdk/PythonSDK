#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLinearInterpolate()
{
    class_< UMaterialExpressionLinearInterpolate, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLinearInterpolate", no_init)
        .def_readwrite("A", &UMaterialExpressionLinearInterpolate::A)
        .def_readwrite("B", &UMaterialExpressionLinearInterpolate::B)
        .def_readwrite("Alpha", &UMaterialExpressionLinearInterpolate::Alpha)
        .def("StaticClass", &UMaterialExpressionLinearInterpolate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}