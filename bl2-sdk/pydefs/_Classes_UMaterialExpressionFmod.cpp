#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFmod(py::object m)
{
    py::class_< UMaterialExpressionFmod,  UMaterialExpression   >(m, "UMaterialExpressionFmod")
        .def_readwrite("A", &UMaterialExpressionFmod::A)
        .def_readwrite("B", &UMaterialExpressionFmod::B)
        .def("StaticClass", &UMaterialExpressionFmod::StaticClass, py::return_value_policy::reference)
          ;
}