#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdx()
{
    class_< UMaterialExpressionDdx, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDdx", no_init)
        .def_readwrite("Input", &UMaterialExpressionDdx::Input)
        .def("StaticClass", &UMaterialExpressionDdx::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}