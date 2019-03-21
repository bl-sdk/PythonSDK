#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_SubMachineGun()
{
    class_< UWillowDmgSource_SubMachineGun, bases< UWillowDmgSource_Bullet >  , boost::noncopyable>("UWillowDmgSource_SubMachineGun", no_init)
        .def("StaticClass", &UWillowDmgSource_SubMachineGun::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}