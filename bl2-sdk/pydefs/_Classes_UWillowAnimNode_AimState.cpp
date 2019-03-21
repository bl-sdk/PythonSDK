#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_AimState()
{
    class_< UWillowAnimNode_AimState, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNode_AimState", no_init)
        .def_readwrite("TransitionAnims", &UWillowAnimNode_AimState::TransitionAnims)
        .def_readwrite("CurrentModeChildIndex", &UWillowAnimNode_AimState::CurrentModeChildIndex)
        .def_readwrite("TransitionBlendOutTime", &UWillowAnimNode_AimState::TransitionBlendOutTime)
        .def("StaticClass", &UWillowAnimNode_AimState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}