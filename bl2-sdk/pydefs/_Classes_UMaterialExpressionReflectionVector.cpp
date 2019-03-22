#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionReflectionVector(py::module &m)
{
    py::class_< UMaterialExpressionReflectionVector,  UMaterialExpression   >(m, "UMaterialExpressionReflectionVector")
        .def("StaticClass", &UMaterialExpressionReflectionVector::StaticClass, py::return_value_policy::reference)
          ;
}