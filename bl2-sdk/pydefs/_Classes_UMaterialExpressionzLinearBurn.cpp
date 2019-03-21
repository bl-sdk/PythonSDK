#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearBurn()
{
    py::class_< UMaterialExpressionzLinearBurn,  UMaterialExpression   >("UMaterialExpressionzLinearBurn")
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
        .def("StaticClass", &UMaterialExpressionzLinearBurn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}