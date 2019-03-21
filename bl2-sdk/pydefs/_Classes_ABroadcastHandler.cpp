#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABroadcastHandler()
{
    class_< ABroadcastHandler, bases< AInfo >  , boost::noncopyable>("ABroadcastHandler", no_init)
        .def_readwrite("SentText", &ABroadcastHandler::SentText)
        .def("StaticClass", &ABroadcastHandler::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventAllowBroadcastLocalizedTeam", &ABroadcastHandler::eventAllowBroadcastLocalizedTeam)
        .def("eventAllowBroadcastLocalized", &ABroadcastHandler::eventAllowBroadcastLocalized)
        .def("BroadcastTeam", &ABroadcastHandler::BroadcastTeam)
        .def("Broadcast", &ABroadcastHandler::Broadcast)
        .def("BroadcastLocalized", &ABroadcastHandler::BroadcastLocalized)
        .def("BroadcastText", &ABroadcastHandler::BroadcastText)
        .def("AllowsBroadcast", &ABroadcastHandler::AllowsBroadcast)
        .def("UpdateSentText", &ABroadcastHandler::UpdateSentText)
        .staticmethod("StaticClass")
  ;
}