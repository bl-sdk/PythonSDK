#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkyLightToggleable()
{
    class_< ASkyLightToggleable, bases< ALight >  , boost::noncopyable>("ASkyLightToggleable", no_init)
        .def("StaticClass", &ASkyLightToggleable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}