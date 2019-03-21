#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp()
{
    class_< UMaterialExpressionExp, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionExp", no_init)
        .def_readwrite("Input", &UMaterialExpressionExp::Input)
        .def("StaticClass", &UMaterialExpressionExp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}