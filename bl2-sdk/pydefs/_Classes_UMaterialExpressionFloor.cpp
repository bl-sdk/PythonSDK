#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFloor()
{
    class_< UMaterialExpressionFloor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFloor", no_init)
        .def_readwrite("Input", &UMaterialExpressionFloor::Input)
        .def("StaticClass", &UMaterialExpressionFloor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}