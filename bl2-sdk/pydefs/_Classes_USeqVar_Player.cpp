#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Player(py::module &m)
{
    py::class_< USeqVar_Player,  USequenceVariable   >(m, "USeqVar_Player")
        .def_readwrite("Players", &USeqVar_Player::Players)
        .def_readwrite("PlayerIdx", &USeqVar_Player::PlayerIdx)
        .def_readwrite("ObjValue", &USeqVar_Object::ObjValue)
        .def_readwrite("ActorLocation", &USeqVar_Object::ActorLocation)
        .def("StaticClass", &USeqVar_Player::StaticClass, py::return_value_policy::reference)
        .def("GetObjectValue", &USeqVar_Player::GetObjectValue, py::return_value_policy::reference)
        .def("UpdatePlayersList", &USeqVar_Player::UpdatePlayersList)
        .def("SetObjectValue", &USeqVar_Object::SetObjectValue)
          ;
}