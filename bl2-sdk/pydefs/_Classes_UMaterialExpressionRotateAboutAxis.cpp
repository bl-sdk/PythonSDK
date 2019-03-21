#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotateAboutAxis()
{
    class_< UMaterialExpressionRotateAboutAxis, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionRotateAboutAxis", no_init)
        .def_readwrite("NormalizedRotationAxisAndAngle", &UMaterialExpressionRotateAboutAxis::NormalizedRotationAxisAndAngle)
        .def_readwrite("PositionOnAxis", &UMaterialExpressionRotateAboutAxis::PositionOnAxis)
        .def_readwrite("Position", &UMaterialExpressionRotateAboutAxis::Position)
        .def("StaticClass", &UMaterialExpressionRotateAboutAxis::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}