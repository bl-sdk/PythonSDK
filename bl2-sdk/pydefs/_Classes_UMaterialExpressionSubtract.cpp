#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSubtract()
{
    class_< UMaterialExpressionSubtract, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSubtract", no_init)
        .def_readwrite("A", &UMaterialExpressionSubtract::A)
        .def_readwrite("B", &UMaterialExpressionSubtract::B)
        .def("StaticClass", &UMaterialExpressionSubtract::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}