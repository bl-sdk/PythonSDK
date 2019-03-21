#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffset()
{
    class_< UMaterialExpressionBumpOffset, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionBumpOffset", no_init)
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffset::Coordinate)
        .def_readwrite("Height", &UMaterialExpressionBumpOffset::Height)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffset::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffset::ReferencePlane)
        .def("StaticClass", &UMaterialExpressionBumpOffset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}