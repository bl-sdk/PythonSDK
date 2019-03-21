#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADirectionalLightToggleable()
{
    class_< ADirectionalLightToggleable, bases< ADirectionalLight >  , boost::noncopyable>("ADirectionalLightToggleable", no_init)
        .def("StaticClass", &ADirectionalLightToggleable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}