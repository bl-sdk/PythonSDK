#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAbs()
{
    class_< UMaterialExpressionAbs, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionAbs", no_init)
        .def_readwrite("Input", &UMaterialExpressionAbs::Input)
        .def("StaticClass", &UMaterialExpressionAbs::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}