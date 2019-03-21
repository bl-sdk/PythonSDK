#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSwizzle()
{
    py::class_< UMaterialExpressionSwizzle,  UMaterialExpression   >("UMaterialExpressionSwizzle")
        .def_readwrite("Input", &UMaterialExpressionSwizzle::Input)
        .def_readwrite("SwizzleMask", &UMaterialExpressionSwizzle::SwizzleMask)
        .def("StaticClass", &UMaterialExpressionSwizzle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}