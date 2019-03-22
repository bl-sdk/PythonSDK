#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMin(py::module &m)
{
    py::class_< UMaterialExpressionMin,  UMaterialExpression   >(m, "UMaterialExpressionMin")
        .def_readwrite("A", &UMaterialExpressionMin::A)
        .def_readwrite("B", &UMaterialExpressionMin::B)
        .def("StaticClass", &UMaterialExpressionMin::StaticClass, py::return_value_policy::reference)
          ;
}