#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDesaturation()
{
    class_< UMaterialExpressionDesaturation, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDesaturation", no_init)
        .def_readwrite("Input", &UMaterialExpressionDesaturation::Input)
        .def_readwrite("Percent", &UMaterialExpressionDesaturation::Percent)
        .def_readwrite("LuminanceFactors", &UMaterialExpressionDesaturation::LuminanceFactors)
        .def("StaticClass", &UMaterialExpressionDesaturation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}