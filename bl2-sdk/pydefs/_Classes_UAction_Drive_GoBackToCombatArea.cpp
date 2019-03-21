#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Drive_GoBackToCombatArea()
{
    class_< UAction_Drive_GoBackToCombatArea, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_Drive_GoBackToCombatArea", no_init)
        .def_readwrite("MinSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::MinSpeedMultiplier)
        .def_readwrite("MaxSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::MaxSpeedMultiplier)
        .def_readwrite("MyVehicle", &UAction_Drive_GoBackToCombatArea::MyVehicle)
        .def("StaticClass", &UAction_Drive_GoBackToCombatArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::SetSpeedMultiplier)
        .def("eventStop", &UAction_Drive_GoBackToCombatArea::eventStop)
        .def("eventStart", &UAction_Drive_GoBackToCombatArea::eventStart)
        .def("eventCanRun", &UAction_Drive_GoBackToCombatArea::eventCanRun)
        .staticmethod("StaticClass")
  ;
}