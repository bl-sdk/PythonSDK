#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASpotLightMovable()
{
    class_< ASpotLightMovable, bases< ASpotLight >  , boost::noncopyable>("ASpotLightMovable", no_init)
        .def("StaticClass", &ASpotLightMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}