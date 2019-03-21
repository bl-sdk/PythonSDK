#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDistance()
{
    class_< UMaterialExpressionDistance, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDistance", no_init)
        .def_readwrite("A", &UMaterialExpressionDistance::A)
        .def_readwrite("B", &UMaterialExpressionDistance::B)
        .def("StaticClass", &UMaterialExpressionDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}