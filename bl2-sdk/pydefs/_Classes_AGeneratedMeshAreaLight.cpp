#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGeneratedMeshAreaLight()
{
    class_< AGeneratedMeshAreaLight, bases< ASpotLight >  , boost::noncopyable>("AGeneratedMeshAreaLight", no_init)
        .def("StaticClass", &AGeneratedMeshAreaLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}