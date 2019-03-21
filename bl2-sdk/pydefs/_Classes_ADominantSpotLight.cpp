#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADominantSpotLight()
{
    class_< ADominantSpotLight, bases< ASpotLight >  , boost::noncopyable>("ADominantSpotLight", no_init)
        .def("StaticClass", &ADominantSpotLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}