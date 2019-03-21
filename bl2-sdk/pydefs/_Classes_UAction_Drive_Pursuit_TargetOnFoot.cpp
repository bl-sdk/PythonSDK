#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Drive_Pursuit_TargetOnFoot(py::object m)
{
    py::class_< UAction_Drive_Pursuit_TargetOnFoot,  UWillowActionSequencePawn   >(m, "UAction_Drive_Pursuit_TargetOnFoot")
        .def_readwrite("MaxSpeedMultiplier", &UAction_Drive_Pursuit_TargetOnFoot::MaxSpeedMultiplier)
        .def_readwrite("SpeedMultiplierDuringSharpTurns", &UAction_Drive_Pursuit_TargetOnFoot::SpeedMultiplierDuringSharpTurns)
        .def_readwrite("DistanceToTargetStartAction", &UAction_Drive_Pursuit_TargetOnFoot::DistanceToTargetStartAction)
        .def_readwrite("DistanceToTargetStopAction", &UAction_Drive_Pursuit_TargetOnFoot::DistanceToTargetStopAction)
        .def_readwrite("DistanceToTargetPursue", &UAction_Drive_Pursuit_TargetOnFoot::DistanceToTargetPursue)
        .def_readwrite("DistanceToTargetRetreat", &UAction_Drive_Pursuit_TargetOnFoot::DistanceToTargetRetreat)
        .def_readwrite("CanUseHandbrakeSpeedThreshold", &UAction_Drive_Pursuit_TargetOnFoot::CanUseHandbrakeSpeedThreshold)
        .def_readwrite("NoHandbrakeSpeedThreshold", &UAction_Drive_Pursuit_TargetOnFoot::NoHandbrakeSpeedThreshold)
        .def_readwrite("MyVehicle", &UAction_Drive_Pursuit_TargetOnFoot::MyVehicle)
        .def_readwrite("PursuitPoint", &UAction_Drive_Pursuit_TargetOnFoot::PursuitPoint)
        .def_readwrite("SpeedMultiplier", &UAction_Drive_Pursuit_TargetOnFoot::SpeedMultiplier)
        .def_readwrite("TimeOfLastBraking", &UAction_Drive_Pursuit_TargetOnFoot::TimeOfLastBraking)
        .def_readwrite("MyCombatArea", &UAction_Drive_Pursuit_TargetOnFoot::MyCombatArea)
        .def_readwrite("TimeStampOutsideCombatArea", &UAction_Drive_Pursuit_TargetOnFoot::TimeStampOutsideCombatArea)
        .def_readwrite("MinTimeSpentBraking", &UAction_Drive_Pursuit_TargetOnFoot::MinTimeSpentBraking)
        .def_readwrite("RequiredDelayBetweenBrakings", &UAction_Drive_Pursuit_TargetOnFoot::RequiredDelayBetweenBrakings)
        .def_readwrite("OutOfCombatAreaGracePeriod", &UAction_Drive_Pursuit_TargetOnFoot::OutOfCombatAreaGracePeriod)
        .def("StaticClass", &UAction_Drive_Pursuit_TargetOnFoot::StaticClass, py::return_value_policy::reference)
        .def("IsSharpTurn", &UAction_Drive_Pursuit_TargetOnFoot::IsSharpTurn)
        .def("GetPursuitPointAndSpeedMultiplier", &UAction_Drive_Pursuit_TargetOnFoot::GetPursuitPointAndSpeedMultiplier)
        .def("eventStop", &UAction_Drive_Pursuit_TargetOnFoot::eventStop)
        .def("eventStart", &UAction_Drive_Pursuit_TargetOnFoot::eventStart)
        .def("eventCanRun", &UAction_Drive_Pursuit_TargetOnFoot::eventCanRun)
          ;
}