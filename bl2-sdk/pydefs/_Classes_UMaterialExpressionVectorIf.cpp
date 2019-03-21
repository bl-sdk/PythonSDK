#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVectorIf()
{
    class_< UMaterialExpressionVectorIf, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionVectorIf", no_init)
        .def_readwrite("A", &UMaterialExpressionVectorIf::A)
        .def_readwrite("B", &UMaterialExpressionVectorIf::B)
        .def_readwrite("IfTrue", &UMaterialExpressionVectorIf::IfTrue)
        .def_readwrite("IfFalse", &UMaterialExpressionVectorIf::IfFalse)
        .def_readwrite("CompareFunc", &UMaterialExpressionVectorIf::CompareFunc)
        .def("StaticClass", &UMaterialExpressionVectorIf::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}