#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureCoordinate()
{
    class_< UMaterialExpressionTextureCoordinate, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTextureCoordinate", no_init)
        .def_readwrite("CoordinateIndex", &UMaterialExpressionTextureCoordinate::CoordinateIndex)
        .def_readwrite("UTiling", &UMaterialExpressionTextureCoordinate::UTiling)
        .def_readwrite("VTiling", &UMaterialExpressionTextureCoordinate::VTiling)
        .def("StaticClass", &UMaterialExpressionTextureCoordinate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}