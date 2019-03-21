#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScreenPosition(py::object m)
{
    py::class_< UMaterialExpressionScreenPosition,  UMaterialExpression   >(m, "UMaterialExpressionScreenPosition")
        .def("StaticClass", &UMaterialExpressionScreenPosition::StaticClass, py::return_value_policy::reference)
          ;
}