#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog10()
{
    class_< UMaterialExpressionLog10, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLog10", no_init)
        .def_readwrite("Input", &UMaterialExpressionLog10::Input)
        .def("StaticClass", &UMaterialExpressionLog10::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}