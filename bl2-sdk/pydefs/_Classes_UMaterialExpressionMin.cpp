#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMin()
{
    class_< UMaterialExpressionMin, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMin", no_init)
        .def_readwrite("A", &UMaterialExpressionMin::A)
        .def_readwrite("B", &UMaterialExpressionMin::B)
        .def("StaticClass", &UMaterialExpressionMin::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}