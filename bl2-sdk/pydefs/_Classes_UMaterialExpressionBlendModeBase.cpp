#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBlendModeBase(py::module &m)
{
    py::class_< UMaterialExpressionBlendModeBase,  UMaterialExpression   >(m, "UMaterialExpressionBlendModeBase")
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
          ;
}