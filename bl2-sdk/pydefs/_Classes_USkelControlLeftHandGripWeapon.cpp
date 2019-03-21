#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlLeftHandGripWeapon()
{
    class_< USkelControlLeftHandGripWeapon, bases< USkelControlLimb >  , boost::noncopyable>("USkelControlLeftHandGripWeapon", no_init)
        .def_readwrite("CachedBodyClass", &USkelControlLeftHandGripWeapon::CachedBodyClass)
        .def("StaticClass", &USkelControlLeftHandGripWeapon::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}