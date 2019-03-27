#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAppendVector(py::module &m)
{
    py::class_< UMaterialExpressionAppendVector,  UMaterialExpression   >(m, "UMaterialExpressionAppendVector")
		.def_static("StaticClass", &UMaterialExpressionAppendVector::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionAppendVector::A)
        .def_readwrite("B", &UMaterialExpressionAppendVector::B)
          ;
}