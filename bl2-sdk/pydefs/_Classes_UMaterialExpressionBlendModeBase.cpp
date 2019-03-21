#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBlendModeBase()
{
    py::class_< UMaterialExpressionBlendModeBase,  UMaterialExpression   >("UMaterialExpressionBlendModeBase")
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
        .def("StaticClass", &UMaterialExpressionBlendModeBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}