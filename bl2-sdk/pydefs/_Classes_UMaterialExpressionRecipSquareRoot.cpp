#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRecipSquareRoot(py::object m)
{
    py::class_< UMaterialExpressionRecipSquareRoot,  UMaterialExpression   >(m, "UMaterialExpressionRecipSquareRoot")
        .def_readwrite("Input", &UMaterialExpressionRecipSquareRoot::Input)
        .def("StaticClass", &UMaterialExpressionRecipSquareRoot::StaticClass, py::return_value_policy::reference)
          ;
}