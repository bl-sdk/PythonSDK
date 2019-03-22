#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthOfFieldFunction(py::module &m)
{
    py::class_< UMaterialExpressionDepthOfFieldFunction,  UMaterialExpression   >(m, "UMaterialExpressionDepthOfFieldFunction")
        .def_readwrite("FunctionValue", &UMaterialExpressionDepthOfFieldFunction::FunctionValue)
        .def_readwrite("Depth", &UMaterialExpressionDepthOfFieldFunction::Depth)
        .def("StaticClass", &UMaterialExpressionDepthOfFieldFunction::StaticClass, py::return_value_policy::reference)
          ;
}