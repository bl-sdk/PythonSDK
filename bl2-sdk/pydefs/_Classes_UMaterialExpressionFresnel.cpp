#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFresnel()
{
    class_< UMaterialExpressionFresnel, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFresnel", no_init)
        .def_readwrite("Exponent", &UMaterialExpressionFresnel::Exponent)
        .def_readwrite("Normal", &UMaterialExpressionFresnel::Normal)
        .def("StaticClass", &UMaterialExpressionFresnel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}