#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant4Vector()
{
    class_< UMaterialExpressionConstant4Vector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstant4Vector", no_init)
        .def_readwrite("R", &UMaterialExpressionConstant4Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant4Vector::G)
        .def_readwrite("B", &UMaterialExpressionConstant4Vector::B)
        .def_readwrite("A", &UMaterialExpressionConstant4Vector::A)
        .def("StaticClass", &UMaterialExpressionConstant4Vector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}