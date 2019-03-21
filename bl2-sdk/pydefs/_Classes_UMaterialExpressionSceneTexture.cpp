#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSceneTexture()
{
    class_< UMaterialExpressionSceneTexture, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSceneTexture", no_init)
        .def_readwrite("Coordinates", &UMaterialExpressionSceneTexture::Coordinates)
        .def_readwrite("SceneTextureType", &UMaterialExpressionSceneTexture::SceneTextureType)
        .def("StaticClass", &UMaterialExpressionSceneTexture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}