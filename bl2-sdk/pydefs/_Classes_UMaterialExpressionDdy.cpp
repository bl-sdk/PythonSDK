#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdy()
{
    class_< UMaterialExpressionDdy, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDdy", no_init)
        .def_readwrite("Input", &UMaterialExpressionDdy::Input)
        .def("StaticClass", &UMaterialExpressionDdy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}