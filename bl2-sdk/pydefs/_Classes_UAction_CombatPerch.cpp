#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_CombatPerch()
{
    class_< UAction_CombatPerch, bases< UAction_FollowPath >  , boost::noncopyable>("UAction_CombatPerch", no_init)
        .def("StaticClass", &UAction_CombatPerch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPathFind", &UAction_CombatPerch::eventPathFind)
        .def("eventStop", &UAction_CombatPerch::eventStop)
        .def("eventStart", &UAction_CombatPerch::eventStart)
        .def("eventCanRun", &UAction_CombatPerch::eventCanRun)
        .staticmethod("StaticClass")
  ;
}