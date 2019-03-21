#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVertexColor(py::object m)
{
    py::class_< UMaterialExpressionVertexColor,  UMaterialExpression   >(m, "UMaterialExpressionVertexColor")
        .def("StaticClass", &UMaterialExpressionVertexColor::StaticClass, py::return_value_policy::reference)
          ;
}