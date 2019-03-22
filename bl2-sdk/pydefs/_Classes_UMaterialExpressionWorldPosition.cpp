#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldPosition(py::module &m)
{
    py::class_< UMaterialExpressionWorldPosition,  UMaterialExpression   >(m, "UMaterialExpressionWorldPosition")
        .def("StaticClass", &UMaterialExpressionWorldPosition::StaticClass, py::return_value_policy::reference)
          ;
}