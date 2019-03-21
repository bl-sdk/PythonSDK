#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Sniper()
{
    class_< UWillowDmgSource_Sniper, bases< UWillowDmgSource_Bullet >  , boost::noncopyable>("UWillowDmgSource_Sniper", no_init)
        .def("StaticClass", &UWillowDmgSource_Sniper::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}