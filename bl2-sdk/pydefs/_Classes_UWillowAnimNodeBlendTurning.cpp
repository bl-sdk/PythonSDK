#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendTurning()
{
    class_< UWillowAnimNodeBlendTurning, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendTurning", no_init)
        .def_readwrite("TurnTransitionDelay", &UWillowAnimNodeBlendTurning::TurnTransitionDelay)
        .def_readwrite("BlendUpTime", &UWillowAnimNodeBlendTurning::BlendUpTime)
        .def_readwrite("BlendDownTime", &UWillowAnimNodeBlendTurning::BlendDownTime)
        .def_readwrite("PrevAngle", &UWillowAnimNodeBlendTurning::PrevAngle)
        .def_readwrite("PrevDeltaAngle", &UWillowAnimNodeBlendTurning::PrevDeltaAngle)
        .def_readwrite("DeltaAngle", &UWillowAnimNodeBlendTurning::DeltaAngle)
        .def_readwrite("CurrentTurnTransitionDelay", &UWillowAnimNodeBlendTurning::CurrentTurnTransitionDelay)
        .def("StaticClass", &UWillowAnimNodeBlendTurning::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}