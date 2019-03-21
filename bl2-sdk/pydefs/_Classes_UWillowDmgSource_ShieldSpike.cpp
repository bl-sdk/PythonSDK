#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldSpike()
{
    class_< UWillowDmgSource_ShieldSpike, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_ShieldSpike", no_init)
        .def("StaticClass", &UWillowDmgSource_ShieldSpike::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}