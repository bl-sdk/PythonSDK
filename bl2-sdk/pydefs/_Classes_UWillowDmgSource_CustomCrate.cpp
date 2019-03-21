#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_CustomCrate()
{
    class_< UWillowDmgSource_CustomCrate, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_CustomCrate", no_init)
        .def("StaticClass", &UWillowDmgSource_CustomCrate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}