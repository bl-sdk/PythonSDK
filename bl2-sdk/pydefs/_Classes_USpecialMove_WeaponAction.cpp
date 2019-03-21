#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponAction()
{
    class_< USpecialMove_WeaponAction, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_WeaponAction", no_init)
        .def("StaticClass", &USpecialMove_WeaponAction::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventClientStarted", &USpecialMove_WeaponAction::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}