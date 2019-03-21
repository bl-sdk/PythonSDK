#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDegrees()
{
    class_< UMaterialExpressionDegrees, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDegrees", no_init)
        .def_readwrite("Input", &UMaterialExpressionDegrees::Input)
        .def("StaticClass", &UMaterialExpressionDegrees::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}