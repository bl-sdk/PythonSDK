#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLength(py::module &m)
{
    py::class_< UMaterialExpressionLength,  UMaterialExpression   >(m, "UMaterialExpressionLength")
        .def_readwrite("Input", &UMaterialExpressionLength::Input)
        .def("StaticClass", &UMaterialExpressionLength::StaticClass, py::return_value_policy::reference)
          ;
}