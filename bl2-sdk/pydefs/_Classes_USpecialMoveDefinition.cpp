#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMoveDefinition()
{
    class_< USpecialMoveDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USpecialMoveDefinition", no_init)
        .def_readwrite("NextSpecialMove", &USpecialMoveDefinition::NextSpecialMove)
        .def_readwrite("StopExpression", &USpecialMoveDefinition::StopExpression)
        .def("StaticClass", &USpecialMoveDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsPlayingLocally", &USpecialMoveDefinition::eventIsPlayingLocally)
        .def("GetSMDToPlay", &USpecialMoveDefinition::GetSMDToPlay, return_value_policy< reference_existing_object >())
        .def("Contains", &USpecialMoveDefinition::Contains)
        .def("eventClientFinished", &USpecialMoveDefinition::eventClientFinished)
        .def("eventServerFinished", &USpecialMoveDefinition::eventServerFinished)
        .def("eventClientStarted", &USpecialMoveDefinition::eventClientStarted)
        .def("eventServerStarted", &USpecialMoveDefinition::eventServerStarted)
        .def("IsLocalAuthority", &USpecialMoveDefinition::IsLocalAuthority)
        .def("eventAuthorityCanPlay", &USpecialMoveDefinition::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}