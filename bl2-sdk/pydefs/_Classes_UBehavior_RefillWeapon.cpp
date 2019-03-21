#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RefillWeapon()
{
    class_< UBehavior_RefillWeapon, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RefillWeapon", no_init)
        .def("StaticClass", &UBehavior_RefillWeapon::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RefillWeapon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}