#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFresnel(py::object m)
{
    py::class_< UMaterialExpressionFresnel,  UMaterialExpression   >(m, "UMaterialExpressionFresnel")
        .def_readwrite("Exponent", &UMaterialExpressionFresnel::Exponent)
        .def_readwrite("Normal", &UMaterialExpressionFresnel::Normal)
        .def("StaticClass", &UMaterialExpressionFresnel::StaticClass, py::return_value_policy::reference)
          ;
}