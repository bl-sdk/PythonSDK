#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTangent()
{
    class_< UMaterialExpressionTangent, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTangent", no_init)
        .def_readwrite("Input", &UMaterialExpressionTangent::Input)
        .def("StaticClass", &UMaterialExpressionTangent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}