#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeWeaponVisibility()
{
    class_< UBehavior_ChangeWeaponVisibility, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeWeaponVisibility", no_init)
        .def_readwrite("Status", &UBehavior_ChangeWeaponVisibility::Status)
        .def("StaticClass", &UBehavior_ChangeWeaponVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeWeaponVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}