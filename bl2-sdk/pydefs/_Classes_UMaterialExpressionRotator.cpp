#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotator()
{
    class_< UMaterialExpressionRotator, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionRotator", no_init)
        .def_readwrite("Coordinate", &UMaterialExpressionRotator::Coordinate)
        .def_readwrite("Time", &UMaterialExpressionRotator::Time)
        .def_readwrite("CenterX", &UMaterialExpressionRotator::CenterX)
        .def_readwrite("CenterY", &UMaterialExpressionRotator::CenterY)
        .def_readwrite("Speed", &UMaterialExpressionRotator::Speed)
        .def("StaticClass", &UMaterialExpressionRotator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}