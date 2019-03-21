#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Grenade()
{
    class_< UWillowDmgSource_Grenade, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Grenade", no_init)
        .def("StaticClass", &UWillowDmgSource_Grenade::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}