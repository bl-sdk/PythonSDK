#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDesaturation()
{
    py::class_< UMaterialExpressionDesaturation,  UMaterialExpression   >("UMaterialExpressionDesaturation")
        .def_readwrite("Input", &UMaterialExpressionDesaturation::Input)
        .def_readwrite("Percent", &UMaterialExpressionDesaturation::Percent)
        .def_readwrite("LuminanceFactors", &UMaterialExpressionDesaturation::LuminanceFactors)
        .def("StaticClass", &UMaterialExpressionDesaturation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}