#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog2()
{
    class_< UMaterialExpressionLog2, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLog2", no_init)
        .def_readwrite("Input", &UMaterialExpressionLog2::Input)
        .def("StaticClass", &UMaterialExpressionLog2::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}