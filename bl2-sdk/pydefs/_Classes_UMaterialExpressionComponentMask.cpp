#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComponentMask()
{
    class_< UMaterialExpressionComponentMask, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionComponentMask", no_init)
        .def_readwrite("Input", &UMaterialExpressionComponentMask::Input)
        .def("StaticClass", &UMaterialExpressionComponentMask::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}