#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLight()
{
    class_< ADominantDirectionalLight, bases< ALight >  , boost::noncopyable>("ADominantDirectionalLight", no_init)
        .def("StaticClass", &ADominantDirectionalLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}