#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMeshEmitterVertexColor()
{
    class_< UMaterialExpressionMeshEmitterVertexColor, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMeshEmitterVertexColor", no_init)
        .def("StaticClass", &UMaterialExpressionMeshEmitterVertexColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}