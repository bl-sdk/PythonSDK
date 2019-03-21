#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSceneDepth()
{
    class_< UMaterialExpressionSceneDepth, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSceneDepth", no_init)
        .def_readwrite("Coordinates", &UMaterialExpressionSceneDepth::Coordinates)
        .def("StaticClass", &UMaterialExpressionSceneDepth::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}