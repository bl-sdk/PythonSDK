#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMoveInterface()
{
    class_< USpecialMoveInterface, bases< UInterface >  , boost::noncopyable>("USpecialMoveInterface", no_init)
        .def("StaticClass", &USpecialMoveInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetReplicatedSMData", &USpecialMoveInterface::SetReplicatedSMData)
        .def("eventServerSpecialMove_StopAny", &USpecialMoveInterface::eventServerSpecialMove_StopAny)
        .def("eventServerSpecialMove_Stop", &USpecialMoveInterface::eventServerSpecialMove_Stop)
        .def("eventServerSpecialMove_Queue", &USpecialMoveInterface::eventServerSpecialMove_Queue)
        .def("eventServerSpecialMove_Play", &USpecialMoveInterface::eventServerSpecialMove_Play)
        .def("GetDefaultRootMotionRotationMode", &USpecialMoveInterface::GetDefaultRootMotionRotationMode)
        .def("GetDefaultRootMotionMode", &USpecialMoveInterface::GetDefaultRootMotionMode)
        .def("GetSkelMesh", &USpecialMoveInterface::GetSkelMesh, return_value_policy< reference_existing_object >())
        .def("GetSMComponent", &USpecialMoveInterface::GetSMComponent, return_value_policy< reference_existing_object >())
        .def("GetActor", &USpecialMoveInterface::GetActor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}