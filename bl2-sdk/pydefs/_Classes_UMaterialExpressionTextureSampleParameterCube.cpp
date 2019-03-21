#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameterCube(py::object m)
{
    py::class_< UMaterialExpressionTextureSampleParameterCube,  UMaterialExpressionTextureSampleParameter   >(m, "UMaterialExpressionTextureSampleParameterCube")
        .def("StaticClass", &UMaterialExpressionTextureSampleParameterCube::StaticClass, py::return_value_policy::reference)
          ;
}