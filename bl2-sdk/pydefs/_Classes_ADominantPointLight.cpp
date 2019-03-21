#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADominantPointLight()
{
    class_< ADominantPointLight, bases< APointLight >  , boost::noncopyable>("ADominantPointLight", no_init)
        .def("StaticClass", &ADominantPointLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}