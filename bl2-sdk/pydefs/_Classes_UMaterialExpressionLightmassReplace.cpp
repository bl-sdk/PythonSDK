#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLightmassReplace()
{
    class_< UMaterialExpressionLightmassReplace, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLightmassReplace", no_init)
        .def_readwrite("Realtime", &UMaterialExpressionLightmassReplace::Realtime)
        .def_readwrite("Lightmass", &UMaterialExpressionLightmassReplace::Lightmass)
        .def("StaticClass", &UMaterialExpressionLightmassReplace::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}