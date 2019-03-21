#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_MachineGun()
{
    class_< UWillowDmgSource_MachineGun, bases< UWillowDmgSource_Bullet >  , boost::noncopyable>("UWillowDmgSource_MachineGun", no_init)
        .def("StaticClass", &UWillowDmgSource_MachineGun::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}