#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDistance(py::module &m)
{
    py::class_< UMaterialExpressionDistance,  UMaterialExpression   >(m, "UMaterialExpressionDistance")
        .def_readwrite("A", &UMaterialExpressionDistance::A)
        .def_readwrite("B", &UMaterialExpressionDistance::B)
        .def("StaticClass", &UMaterialExpressionDistance::StaticClass, py::return_value_policy::reference)
          ;
}