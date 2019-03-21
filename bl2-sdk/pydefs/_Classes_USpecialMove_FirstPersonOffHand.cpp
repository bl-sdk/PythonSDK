#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPersonOffHand()
{
    class_< USpecialMove_FirstPersonOffHand, bases< USpecialMove_FirstPerson >  , boost::noncopyable>("USpecialMove_FirstPersonOffHand", no_init)
        .def("StaticClass", &USpecialMove_FirstPersonOffHand::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopWeaponRecoilAnim", &USpecialMove_FirstPersonOffHand::StopWeaponRecoilAnim)
        .staticmethod("StaticClass")
  ;
}