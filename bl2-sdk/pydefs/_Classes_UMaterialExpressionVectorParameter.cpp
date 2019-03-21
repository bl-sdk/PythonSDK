#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVectorParameter()
{
    py::class_< UMaterialExpressionVectorParameter,  UMaterialExpressionParameter   >("UMaterialExpressionVectorParameter")
        .def_readwrite("DefaultValue", &UMaterialExpressionVectorParameter::DefaultValue)
        .def("StaticClass", &UMaterialExpressionVectorParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}