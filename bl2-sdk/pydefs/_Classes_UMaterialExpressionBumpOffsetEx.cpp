#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffsetEx()
{
    class_< UMaterialExpressionBumpOffsetEx, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionBumpOffsetEx", no_init)
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffsetEx::Coordinate)
        .def_readwrite("Height", &UMaterialExpressionBumpOffsetEx::Height)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffsetEx::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffsetEx::ReferencePlane)
        .def("StaticClass", &UMaterialExpressionBumpOffsetEx::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}