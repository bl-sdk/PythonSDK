#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotate3D()
{
    class_< UMaterialExpressionRotate3D, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionRotate3D", no_init)
        .def_readwrite("Vec", &UMaterialExpressionRotate3D::Vec)
        .def_readwrite("MatrixForward", &UMaterialExpressionRotate3D::MatrixForward)
        .def_readwrite("MatrixRight", &UMaterialExpressionRotate3D::MatrixRight)
        .def_readwrite("MatrixUp", &UMaterialExpressionRotate3D::MatrixUp)
        .def("StaticClass", &UMaterialExpressionRotate3D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}