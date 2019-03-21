#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSwizzle()
{
    class_< UMaterialExpressionSwizzle, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSwizzle", no_init)
        .def_readwrite("Input", &UMaterialExpressionSwizzle::Input)
        .def_readwrite("SwizzleMask", &UMaterialExpressionSwizzle::SwizzleMask)
        .def("StaticClass", &UMaterialExpressionSwizzle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}