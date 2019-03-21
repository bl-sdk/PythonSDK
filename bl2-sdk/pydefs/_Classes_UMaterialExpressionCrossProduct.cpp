#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCrossProduct()
{
    class_< UMaterialExpressionCrossProduct, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCrossProduct", no_init)
        .def_readwrite("A", &UMaterialExpressionCrossProduct::A)
        .def_readwrite("B", &UMaterialExpressionCrossProduct::B)
        .def("StaticClass", &UMaterialExpressionCrossProduct::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}