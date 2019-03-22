#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTransformPosition(py::module &m)
{
    py::class_< UMaterialExpressionTransformPosition,  UMaterialExpression   >(m, "UMaterialExpressionTransformPosition")
        .def_readwrite("Input", &UMaterialExpressionTransformPosition::Input)
        .def_readwrite("TransformType", &UMaterialExpressionTransformPosition::TransformType)
        .def("StaticClass", &UMaterialExpressionTransformPosition::StaticClass, py::return_value_policy::reference)
          ;
}