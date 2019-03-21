#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADirectionalLight()
{
    class_< ADirectionalLight, bases< ALight >  , boost::noncopyable>("ADirectionalLight", no_init)
        .def("StaticClass", &ADirectionalLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}