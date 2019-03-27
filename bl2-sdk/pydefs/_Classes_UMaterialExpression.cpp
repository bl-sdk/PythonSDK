#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpression(py::module &m)
{
    py::class_< UMaterialExpression,  UObject   >(m, "UMaterialExpression")
		.def_static("StaticClass", &UMaterialExpression::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Compound", &UMaterialExpression::Compound)
          ;
}