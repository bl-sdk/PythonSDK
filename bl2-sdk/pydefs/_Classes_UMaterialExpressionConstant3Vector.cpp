#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant3Vector()
{
    class_< UMaterialExpressionConstant3Vector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstant3Vector", no_init)
        .def_readwrite("R", &UMaterialExpressionConstant3Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant3Vector::G)
        .def_readwrite("B", &UMaterialExpressionConstant3Vector::B)
        .def("StaticClass", &UMaterialExpressionConstant3Vector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}