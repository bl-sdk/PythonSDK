#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiplyAndAdd()
{
    class_< UMaterialExpressionMultiplyAndAdd, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMultiplyAndAdd", no_init)
        .def_readwrite("A", &UMaterialExpressionMultiplyAndAdd::A)
        .def_readwrite("B", &UMaterialExpressionMultiplyAndAdd::B)
        .def_readwrite("WeightB", &UMaterialExpressionMultiplyAndAdd::WeightB)
        .def("StaticClass", &UMaterialExpressionMultiplyAndAdd::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}