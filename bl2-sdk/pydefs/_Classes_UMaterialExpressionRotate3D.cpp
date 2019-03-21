#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotate3D()
{
    py::class_< UMaterialExpressionRotate3D,  UMaterialExpression   >("UMaterialExpressionRotate3D")
        .def_readwrite("Vec", &UMaterialExpressionRotate3D::Vec)
        .def_readwrite("MatrixForward", &UMaterialExpressionRotate3D::MatrixForward)
        .def_readwrite("MatrixRight", &UMaterialExpressionRotate3D::MatrixRight)
        .def_readwrite("MatrixUp", &UMaterialExpressionRotate3D::MatrixUp)
        .def("StaticClass", &UMaterialExpressionRotate3D::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}