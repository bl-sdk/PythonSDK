#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearBurn(py::module &m)
{
    py::class_< UMaterialExpressionzLinearBurn,  UMaterialExpression   >(m, "UMaterialExpressionzLinearBurn")
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
        .def("StaticClass", &UMaterialExpressionzLinearBurn::StaticClass, py::return_value_policy::reference)
          ;
}