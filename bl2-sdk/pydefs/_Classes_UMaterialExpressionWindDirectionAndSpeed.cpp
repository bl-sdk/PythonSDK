#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWindDirectionAndSpeed(py::object m)
{
    py::class_< UMaterialExpressionWindDirectionAndSpeed,  UMaterialExpression   >(m, "UMaterialExpressionWindDirectionAndSpeed")
        .def("StaticClass", &UMaterialExpressionWindDirectionAndSpeed::StaticClass, py::return_value_policy::reference)
          ;
}