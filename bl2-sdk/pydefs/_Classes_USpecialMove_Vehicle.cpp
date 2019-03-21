#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Vehicle()
{
    class_< USpecialMove_Vehicle, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Vehicle", no_init)
        .def_readwrite("TransitionType", &USpecialMove_Vehicle::TransitionType)
        .def_readwrite("CameraLerpKeyFrames", &USpecialMove_Vehicle::CameraLerpKeyFrames)
        .def("StaticClass", &USpecialMove_Vehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayAnim", &USpecialMove_Vehicle::PlayAnim)
        .def("eventAuthorityCanPlay", &USpecialMove_Vehicle::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}