#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDominantSkyLight()
{
    class_< UMaterialExpressionDominantSkyLight, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDominantSkyLight", no_init)
        .def_readwrite("TimeOfDayMax", &UMaterialExpressionDominantSkyLight::TimeOfDayMax)
        .def_readwrite("TimeOfDayMin", &UMaterialExpressionDominantSkyLight::TimeOfDayMin)
        .def("StaticClass", &UMaterialExpressionDominantSkyLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}