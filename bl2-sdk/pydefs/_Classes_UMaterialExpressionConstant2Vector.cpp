#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant2Vector()
{
    class_< UMaterialExpressionConstant2Vector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstant2Vector", no_init)
        .def_readwrite("R", &UMaterialExpressionConstant2Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant2Vector::G)
        .def("StaticClass", &UMaterialExpressionConstant2Vector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}