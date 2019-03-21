#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDdy(py::object m)
{
    py::class_< UMaterialExpressionDdy,  UMaterialExpression   >(m, "UMaterialExpressionDdy")
        .def_readwrite("Input", &UMaterialExpressionDdy::Input)
        .def("StaticClass", &UMaterialExpressionDdy::StaticClass, py::return_value_policy::reference)
          ;
}