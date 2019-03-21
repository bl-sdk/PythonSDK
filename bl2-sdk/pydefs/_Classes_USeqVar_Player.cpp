#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Player()
{
    class_< USeqVar_Player, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Player", no_init)
        .def_readwrite("Players", &USeqVar_Player::Players)
        .def_readwrite("PlayerIdx", &USeqVar_Player::PlayerIdx)
        .def_readwrite("ObjValue", &USeqVar_Object::ObjValue)
        .def_readwrite("ActorLocation", &USeqVar_Object::ActorLocation)
        .def("StaticClass", &USeqVar_Player::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetObjectValue", &USeqVar_Player::GetObjectValue, return_value_policy< reference_existing_object >())
        .def("UpdatePlayersList", &USeqVar_Player::UpdatePlayersList)
        .def("SetObjectValue", &USeqVar_Object::SetObjectValue)
        .staticmethod("StaticClass")
  ;
}