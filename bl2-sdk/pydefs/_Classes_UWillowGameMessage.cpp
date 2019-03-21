#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGameMessage()
{
    class_< UWillowGameMessage, bases< ULocalMessage >  , boost::noncopyable>("UWillowGameMessage", no_init)
        .def_readwrite("PlayerEnteredGame", &UWillowGameMessage::PlayerEnteredGame)
        .def_readwrite("PlayerLeftGame", &UWillowGameMessage::PlayerLeftGame)
        .def_readwrite("CreaturesGrowStronger", &UWillowGameMessage::CreaturesGrowStronger)
        .def_readwrite("CreaturesWeaken", &UWillowGameMessage::CreaturesWeaken)
        .def("StaticClass", &UWillowGameMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UWillowGameMessage::GetString)
        .def("ClientReceive", &UWillowGameMessage::ClientReceive)
        .staticmethod("StaticClass")
  ;
}