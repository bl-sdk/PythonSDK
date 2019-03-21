#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowElevatorButton(py::object m)
{
    py::class_< AWillowElevatorButton,  AWillowInteractiveObject   >(m, "AWillowElevatorButton")
        .def_readwrite("Usage", &AWillowElevatorButton::Usage)
        .def_readwrite("ButtonState", &AWillowElevatorButton::ButtonState)
        .def_readwrite("CallFloor", &AWillowElevatorButton::CallFloor)
        .def_readwrite("BehaviorSetName_Enabled", &AWillowElevatorButton::BehaviorSetName_Enabled)
        .def_readwrite("BehaviorSetName_Disabled", &AWillowElevatorButton::BehaviorSetName_Disabled)
        .def_readwrite("BehaviorSetName_InUse", &AWillowElevatorButton::BehaviorSetName_InUse)
        .def_readwrite("BehaviorSetName_EnabledButUseless", &AWillowElevatorButton::BehaviorSetName_EnabledButUseless)
        .def_readwrite("BehaviorSetName_Enabled_Glowing", &AWillowElevatorButton::BehaviorSetName_Enabled_Glowing)
        .def_readwrite("BehaviorSetName_Disabled_Glowing", &AWillowElevatorButton::BehaviorSetName_Disabled_Glowing)
        .def_readwrite("BehaviorSetName_InUse_Glowing", &AWillowElevatorButton::BehaviorSetName_InUse_Glowing)
        .def_readwrite("BehaviorSetName_EnabledButUseless_Glowing", &AWillowElevatorButton::BehaviorSetName_EnabledButUseless_Glowing)
        .def_readwrite("AssociatedElevators", &AWillowElevatorButton::AssociatedElevators)
        .def("StaticClass", &AWillowElevatorButton::StaticClass, py::return_value_policy::reference)
        .def("UpdateState", &AWillowElevatorButton::UpdateState)
        .def("CanBeUsedForAnyAssociatedElevator", &AWillowElevatorButton::CanBeUsedForAnyAssociatedElevator)
        .def("UseObject", &AWillowElevatorButton::UseObject)
          ;
}