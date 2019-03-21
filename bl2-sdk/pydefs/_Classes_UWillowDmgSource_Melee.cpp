#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Melee()
{
    class_< UWillowDmgSource_Melee, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Melee", no_init)
        .def("StaticClass", &UWillowDmgSource_Melee::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}