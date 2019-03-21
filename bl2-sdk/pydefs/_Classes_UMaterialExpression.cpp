#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpression(py::object m)
{
    py::class_< UMaterialExpression,  UObject   >(m, "UMaterialExpression")
        .def_readwrite("Compound", &UMaterialExpression::Compound)
        .def("StaticClass", &UMaterialExpression::StaticClass, py::return_value_policy::reference)
          ;
}