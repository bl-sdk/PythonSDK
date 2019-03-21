#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDamageType_Bullet()
{
    class_< UWillowDamageType_Bullet, bases< UWillowDamageType >  , boost::noncopyable>("UWillowDamageType_Bullet", no_init)
        .def("StaticClass", &UWillowDamageType_Bullet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}