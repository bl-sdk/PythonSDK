#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestColor(py::object m)
{
    py::class_< UMaterialExpressionDestColor,  UMaterialExpression   >(m, "UMaterialExpressionDestColor")
        .def("StaticClass", &UMaterialExpressionDestColor::StaticClass, py::return_value_policy::reference)
          ;
}