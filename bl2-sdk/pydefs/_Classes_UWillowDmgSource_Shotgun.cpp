#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shotgun()
{
    class_< UWillowDmgSource_Shotgun, bases< UWillowDmgSource_Bullet >  , boost::noncopyable>("UWillowDmgSource_Shotgun", no_init)
        .def("StaticClass", &UWillowDmgSource_Shotgun::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}