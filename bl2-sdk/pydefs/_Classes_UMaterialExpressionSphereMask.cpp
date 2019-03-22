#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSphereMask(py::module &m)
{
    py::class_< UMaterialExpressionSphereMask,  UMaterialExpression   >(m, "UMaterialExpressionSphereMask")
        .def_readwrite("A", &UMaterialExpressionSphereMask::A)
        .def_readwrite("B", &UMaterialExpressionSphereMask::B)
        .def_readwrite("Radius", &UMaterialExpressionSphereMask::Radius)
        .def_readwrite("Hardness", &UMaterialExpressionSphereMask::Hardness)
        .def_readwrite("AttenuationRadius", &UMaterialExpressionSphereMask::AttenuationRadius)
        .def_readwrite("HardnessPercent", &UMaterialExpressionSphereMask::HardnessPercent)
          ;
}