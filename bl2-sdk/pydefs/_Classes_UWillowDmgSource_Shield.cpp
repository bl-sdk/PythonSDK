#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shield()
{
    class_< UWillowDmgSource_Shield, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Shield", no_init)
        .def("StaticClass", &UWillowDmgSource_Shield::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}