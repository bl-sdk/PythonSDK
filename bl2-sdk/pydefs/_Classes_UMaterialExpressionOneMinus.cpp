#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOneMinus()
{
    class_< UMaterialExpressionOneMinus, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionOneMinus", no_init)
        .def_readwrite("Input", &UMaterialExpressionOneMinus::Input)
        .def("StaticClass", &UMaterialExpressionOneMinus::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}