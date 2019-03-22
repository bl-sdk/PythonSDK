#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPower(py::module &m)
{
    py::class_< UMaterialExpressionPower,  UMaterialExpression   >(m, "UMaterialExpressionPower")
        .def_readwrite("Base", &UMaterialExpressionPower::Base)
        .def_readwrite("Exponent", &UMaterialExpressionPower::Exponent)
        .def("StaticClass", &UMaterialExpressionPower::StaticClass, py::return_value_policy::reference)
          ;
}