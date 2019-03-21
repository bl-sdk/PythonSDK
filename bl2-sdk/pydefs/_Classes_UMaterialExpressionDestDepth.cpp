#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestDepth(py::object m)
{
    py::class_< UMaterialExpressionDestDepth,  UMaterialExpression   >(m, "UMaterialExpressionDestDepth")
        .def("StaticClass", &UMaterialExpressionDestDepth::StaticClass, py::return_value_policy::reference)
          ;
}