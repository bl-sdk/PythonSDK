#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCameraVector(py::object m)
{
    py::class_< UMaterialExpressionCameraVector,  UMaterialExpression   >(m, "UMaterialExpressionCameraVector")
        .def("StaticClass", &UMaterialExpressionCameraVector::StaticClass, py::return_value_policy::reference)
          ;
}