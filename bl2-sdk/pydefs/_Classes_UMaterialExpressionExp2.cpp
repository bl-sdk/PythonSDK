#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp2()
{
    class_< UMaterialExpressionExp2, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionExp2", no_init)
        .def_readwrite("Input", &UMaterialExpressionExp2::Input)
        .def("StaticClass", &UMaterialExpressionExp2::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}