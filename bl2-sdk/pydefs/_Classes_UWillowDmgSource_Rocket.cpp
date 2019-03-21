#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Rocket()
{
    class_< UWillowDmgSource_Rocket, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Rocket", no_init)
        .def("StaticClass", &UWillowDmgSource_Rocket::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}