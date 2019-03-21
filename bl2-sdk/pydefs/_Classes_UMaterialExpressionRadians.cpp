#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRadians()
{
    class_< UMaterialExpressionRadians, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionRadians", no_init)
        .def_readwrite("Input", &UMaterialExpressionRadians::Input)
        .def("StaticClass", &UMaterialExpressionRadians::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}