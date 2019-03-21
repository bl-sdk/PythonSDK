#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSquareRoot()
{
    class_< UMaterialExpressionSquareRoot, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSquareRoot", no_init)
        .def_readwrite("Input", &UMaterialExpressionSquareRoot::Input)
        .def("StaticClass", &UMaterialExpressionSquareRoot::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}