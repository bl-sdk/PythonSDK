#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectWorldPosition(py::module &m)
{
    py::class_< UMaterialExpressionObjectWorldPosition,  UMaterialExpression   >(m, "UMaterialExpressionObjectWorldPosition")
        .def("StaticClass", &UMaterialExpressionObjectWorldPosition::StaticClass, py::return_value_policy::reference)
          ;
}