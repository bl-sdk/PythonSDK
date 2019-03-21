#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_StatusEffect()
{
    class_< UWillowDmgSource_StatusEffect, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_StatusEffect", no_init)
        .def("StaticClass", &UWillowDmgSource_StatusEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}