#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiply()
{
    class_< UMaterialExpressionMultiply, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMultiply", no_init)
        .def_readwrite("A", &UMaterialExpressionMultiply::A)
        .def_readwrite("B", &UMaterialExpressionMultiply::B)
        .def("StaticClass", &UMaterialExpressionMultiply::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}