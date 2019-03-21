#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant()
{
    class_< UMaterialExpressionConstant, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionConstant", no_init)
        .def_readwrite("R", &UMaterialExpressionConstant::R)
        .def("StaticClass", &UMaterialExpressionConstant::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}