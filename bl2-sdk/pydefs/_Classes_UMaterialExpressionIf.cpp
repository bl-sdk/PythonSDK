#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionIf(py::module &m)
{
    py::class_< UMaterialExpressionIf,  UMaterialExpression   >(m, "UMaterialExpressionIf")
        .def_readwrite("A", &UMaterialExpressionIf::A)
        .def_readwrite("B", &UMaterialExpressionIf::B)
        .def_readwrite("AGreaterThanB", &UMaterialExpressionIf::AGreaterThanB)
        .def_readwrite("AEqualsB", &UMaterialExpressionIf::AEqualsB)
        .def_readwrite("ALessThanB", &UMaterialExpressionIf::ALessThanB)
        .def("StaticClass", &UMaterialExpressionIf::StaticClass, py::return_value_policy::reference)
          ;
}