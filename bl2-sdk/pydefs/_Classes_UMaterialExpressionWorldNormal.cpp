#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldNormal(py::object m)
{
    py::class_< UMaterialExpressionWorldNormal,  UMaterialExpression   >(m, "UMaterialExpressionWorldNormal")
        .def("StaticClass", &UMaterialExpressionWorldNormal::StaticClass, py::return_value_policy::reference)
          ;
}