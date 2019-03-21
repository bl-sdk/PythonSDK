#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDivide()
{
    class_< UMaterialExpressionDivide, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDivide", no_init)
        .def_readwrite("A", &UMaterialExpressionDivide::A)
        .def_readwrite("B", &UMaterialExpressionDivide::B)
        .def("StaticClass", &UMaterialExpressionDivide::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}