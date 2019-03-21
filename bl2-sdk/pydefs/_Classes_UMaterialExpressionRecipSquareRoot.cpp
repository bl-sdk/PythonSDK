#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRecipSquareRoot()
{
    class_< UMaterialExpressionRecipSquareRoot, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionRecipSquareRoot", no_init)
        .def_readwrite("Input", &UMaterialExpressionRecipSquareRoot::Input)
        .def("StaticClass", &UMaterialExpressionRecipSquareRoot::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}