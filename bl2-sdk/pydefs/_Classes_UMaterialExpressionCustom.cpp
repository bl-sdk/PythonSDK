#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustom(py::module &m)
{
    py::class_< UMaterialExpressionCustom,  UMaterialExpression   >(m, "UMaterialExpressionCustom")
        .def_readwrite("Code", &UMaterialExpressionCustom::Code)
        .def_readwrite("OutputType", &UMaterialExpressionCustom::OutputType)
        .def_readwrite("Description", &UMaterialExpressionCustom::Description)
        .def_readwrite("Inputs", &UMaterialExpressionCustom::Inputs)
          ;
}