#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVectorParameter(py::module &m)
{
    py::class_< UMaterialExpressionVectorParameter,  UMaterialExpressionParameter   >(m, "UMaterialExpressionVectorParameter")
		.def_static("StaticClass", &UMaterialExpressionVectorParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultValue", &UMaterialExpressionVectorParameter::DefaultValue)
          ;
}