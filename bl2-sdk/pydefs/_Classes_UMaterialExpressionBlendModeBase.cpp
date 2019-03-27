#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBlendModeBase(py::module &m)
{
    py::class_< UMaterialExpressionBlendModeBase,  UMaterialExpression   >(m, "UMaterialExpressionBlendModeBase")
		.def_static("StaticClass", &UMaterialExpressionBlendModeBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
          ;
}