#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPerInstanceRandom(py::module &m)
{
    py::class_< UMaterialExpressionPerInstanceRandom,  UMaterialExpression   >(m, "UMaterialExpressionPerInstanceRandom")
        .def("StaticClass", &UMaterialExpressionPerInstanceRandom::StaticClass, py::return_value_policy::reference)
          ;
}