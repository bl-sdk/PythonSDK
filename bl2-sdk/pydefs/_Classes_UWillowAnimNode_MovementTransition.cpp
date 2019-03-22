#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_MovementTransition(py::module &m)
{
    py::class_< UWillowAnimNode_MovementTransition,  UAnimNodeBlendList   >(m, "UWillowAnimNode_MovementTransition")
        .def_readwrite("LaunchBlendTime", &UWillowAnimNode_MovementTransition::LaunchBlendTime)
        .def_readwrite("PostLaunchBlendTime", &UWillowAnimNode_MovementTransition::PostLaunchBlendTime)
        .def_readwrite("StoppingBlendTime", &UWillowAnimNode_MovementTransition::StoppingBlendTime)
        .def_readwrite("PostStopBlendTime", &UWillowAnimNode_MovementTransition::PostStopBlendTime)
        .def_readwrite("LaunchAnimName", &UWillowAnimNode_MovementTransition::LaunchAnimName)
        .def_readwrite("StopAnimName", &UWillowAnimNode_MovementTransition::StopAnimName)
        .def_readwrite("LaunchDelayTime", &UWillowAnimNode_MovementTransition::LaunchDelayTime)
        .def_readwrite("MoveState", &UWillowAnimNode_MovementTransition::MoveState)
        .def_readwrite("CurrentLaunchDelayTime", &UWillowAnimNode_MovementTransition::CurrentLaunchDelayTime)
        .def("StaticClass", &UWillowAnimNode_MovementTransition::StaticClass, py::return_value_policy::reference)
        .def("NodeIsIdle", &UWillowAnimNode_MovementTransition::NodeIsIdle)
          ;
}