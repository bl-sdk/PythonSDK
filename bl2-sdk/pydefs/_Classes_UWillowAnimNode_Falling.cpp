#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Falling()
{
    class_< UWillowAnimNode_Falling, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNode_Falling", no_init)
        .def_readwrite("DelayBeforeStartFalling", &UWillowAnimNode_Falling::DelayBeforeStartFalling)
        .def_readwrite("MinStartFallingVelocity", &UWillowAnimNode_Falling::MinStartFallingVelocity)
        .def_readwrite("InterruptEndFallMovementSpeed", &UWillowAnimNode_Falling::InterruptEndFallMovementSpeed)
        .def_readwrite("StartFallingTime", &UWillowAnimNode_Falling::StartFallingTime)
        .def_readwrite("StuckFallingTimer", &UWillowAnimNode_Falling::StuckFallingTimer)
        .def_readwrite("ChildBlendInTime", &UWillowAnimNodeBlendList::ChildBlendInTime)
        .def("StaticClass", &UWillowAnimNode_Falling::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}