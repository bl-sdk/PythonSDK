#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_MovementTransition()
{
    class_< UWillowAnimNode_MovementTransition, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNode_MovementTransition", no_init)
        .def_readwrite("LaunchBlendTime", &UWillowAnimNode_MovementTransition::LaunchBlendTime)
        .def_readwrite("PostLaunchBlendTime", &UWillowAnimNode_MovementTransition::PostLaunchBlendTime)
        .def_readwrite("StoppingBlendTime", &UWillowAnimNode_MovementTransition::StoppingBlendTime)
        .def_readwrite("PostStopBlendTime", &UWillowAnimNode_MovementTransition::PostStopBlendTime)
        .def_readwrite("LaunchAnimName", &UWillowAnimNode_MovementTransition::LaunchAnimName)
        .def_readwrite("StopAnimName", &UWillowAnimNode_MovementTransition::StopAnimName)
        .def_readwrite("LaunchDelayTime", &UWillowAnimNode_MovementTransition::LaunchDelayTime)
        .def_readwrite("MoveState", &UWillowAnimNode_MovementTransition::MoveState)
        .def_readwrite("CurrentLaunchDelayTime", &UWillowAnimNode_MovementTransition::CurrentLaunchDelayTime)
        .def("StaticClass", &UWillowAnimNode_MovementTransition::StaticClass, return_value_policy< reference_existing_object >())
        .def("NodeIsIdle", &UWillowAnimNode_MovementTransition::NodeIsIdle)
        .staticmethod("StaticClass")
  ;
}