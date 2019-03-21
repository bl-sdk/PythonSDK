#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameStateObject()
{
    class_< UGameStateObject, bases< UGameplayEventsHandler >  , boost::noncopyable>("UGameStateObject", no_init)
        .def_readwrite("TeamStates", &UGameStateObject::TeamStates)
        .def_readwrite("PlayerStates", &UGameStateObject::PlayerStates)
        .def_readwrite("SessionType", &UGameStateObject::SessionType)
        .def_readwrite("RoundNumber", &UGameStateObject::RoundNumber)
        .def_readwrite("MaxRoundNumber", &UGameStateObject::MaxRoundNumber)
        .def("StaticClass", &UGameStateObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("Reset", &UGameStateObject::Reset)
        .def("eventPreProcessStream", &UGameStateObject::eventPreProcessStream)
        .staticmethod("StaticClass")
  ;
}