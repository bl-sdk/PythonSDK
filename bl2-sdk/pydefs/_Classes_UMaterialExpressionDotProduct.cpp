#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDotProduct()
{
    class_< UMaterialExpressionDotProduct, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDotProduct", no_init)
        .def_readwrite("A", &UMaterialExpressionDotProduct::A)
        .def_readwrite("B", &UMaterialExpressionDotProduct::B)
        .def("StaticClass", &UMaterialExpressionDotProduct::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}