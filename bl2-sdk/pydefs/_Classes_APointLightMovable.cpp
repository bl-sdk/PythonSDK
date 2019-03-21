#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APointLightMovable()
{
    class_< APointLightMovable, bases< APointLight >  , boost::noncopyable>("APointLightMovable", no_init)
        .def("StaticClass", &APointLightMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}