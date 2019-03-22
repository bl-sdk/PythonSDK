#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABroadcastHandler(py::module &m)
{
    py::class_< ABroadcastHandler,  AInfo   >(m, "ABroadcastHandler")
        .def_readwrite("SentText", &ABroadcastHandler::SentText)
        .def("StaticClass", &ABroadcastHandler::StaticClass, py::return_value_policy::reference)
        .def("eventAllowBroadcastLocalizedTeam", &ABroadcastHandler::eventAllowBroadcastLocalizedTeam)
        .def("eventAllowBroadcastLocalized", &ABroadcastHandler::eventAllowBroadcastLocalized)
        .def("BroadcastTeam", &ABroadcastHandler::BroadcastTeam)
        .def("Broadcast", &ABroadcastHandler::Broadcast)
        .def("BroadcastLocalized", &ABroadcastHandler::BroadcastLocalized)
        .def("BroadcastText", &ABroadcastHandler::BroadcastText)
        .def("AllowsBroadcast", &ABroadcastHandler::AllowsBroadcast)
        .def("UpdateSentText", &ABroadcastHandler::UpdateSentText)
          ;
}