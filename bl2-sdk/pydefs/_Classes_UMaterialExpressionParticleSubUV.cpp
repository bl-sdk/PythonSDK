#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleSubUV()
{
    class_< UMaterialExpressionParticleSubUV, bases< UMaterialExpressionTextureSample >  , boost::noncopyable>("UMaterialExpressionParticleSubUV", no_init)
        .def("StaticClass", &UMaterialExpressionParticleSubUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}