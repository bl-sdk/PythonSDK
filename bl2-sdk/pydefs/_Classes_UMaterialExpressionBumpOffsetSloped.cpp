#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffsetSloped()
{
    class_< UMaterialExpressionBumpOffsetSloped, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionBumpOffsetSloped", no_init)
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffsetSloped::Coordinate)
        .def_readwrite("NormalTexture", &UMaterialExpressionBumpOffsetSloped::NormalTexture)
        .def_readwrite("HeightTexture", &UMaterialExpressionBumpOffsetSloped::HeightTexture)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffsetSloped::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffsetSloped::ReferencePlane)
        .def_readwrite("Iterations", &UMaterialExpressionBumpOffsetSloped::Iterations)
        .def("StaticClass", &UMaterialExpressionBumpOffsetSloped::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}