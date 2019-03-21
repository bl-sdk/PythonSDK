#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APointLight()
{
    class_< APointLight, bases< ALight >  , boost::noncopyable>("APointLight", no_init)
        .def("StaticClass", &APointLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}