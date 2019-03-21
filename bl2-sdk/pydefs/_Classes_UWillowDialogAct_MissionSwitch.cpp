#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_MissionSwitch()
{
    py::class_< UWillowDialogAct_MissionSwitch,  UGearboxDialogAction   >("UWillowDialogAct_MissionSwitch")
        .def_readwrite("TrackedState", &UWillowDialogAct_MissionSwitch::TrackedState)
        .def_readwrite("MissionDefinition", &UWillowDialogAct_MissionSwitch::MissionDefinition)
        .def("StaticClass", &UWillowDialogAct_MissionSwitch::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UWillowDialogAct_MissionSwitch::eventActivate)
        .staticmethod("StaticClass")
  ;
}