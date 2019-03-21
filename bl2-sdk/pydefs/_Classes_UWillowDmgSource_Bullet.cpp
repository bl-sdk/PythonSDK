#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Bullet()
{
    class_< UWillowDmgSource_Bullet, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Bullet", no_init)
        .def("StaticClass", &UWillowDmgSource_Bullet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}