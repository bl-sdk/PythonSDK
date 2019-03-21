#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_MissionSwitch()
{
    class_< UWillowDialogAct_MissionSwitch, bases< UGearboxDialogAction >  , boost::noncopyable>("UWillowDialogAct_MissionSwitch", no_init)
        .def_readwrite("TrackedState", &UWillowDialogAct_MissionSwitch::TrackedState)
        .def_readwrite("MissionDefinition", &UWillowDialogAct_MissionSwitch::MissionDefinition)
        .def("StaticClass", &UWillowDialogAct_MissionSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UWillowDialogAct_MissionSwitch::eventActivate)
        .staticmethod("StaticClass")
  ;
}