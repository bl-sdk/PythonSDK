#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponActionOffHand()
{
    class_< USpecialMove_WeaponActionOffHand, bases< USpecialMove_WeaponAction >  , boost::noncopyable>("USpecialMove_WeaponActionOffHand", no_init)
        .def("StaticClass", &USpecialMove_WeaponActionOffHand::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}