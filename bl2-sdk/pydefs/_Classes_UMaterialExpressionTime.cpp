#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTime(py::object m)
{
    py::class_< UMaterialExpressionTime,  UMaterialExpression   >(m, "UMaterialExpressionTime")
        .def("StaticClass", &UMaterialExpressionTime::StaticClass, py::return_value_policy::reference)
          ;
}