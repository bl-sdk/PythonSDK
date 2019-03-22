#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogInterface(py::module &m)
{
    py::class_< UGearboxDialogInterface,  UInterface   >(m, "UGearboxDialogInterface")
        .def("StaticClass", &UGearboxDialogInterface::StaticClass, py::return_value_policy::reference)
        .def("eventServerDialog_TriggerEvent", &UGearboxDialogInterface::eventServerDialog_TriggerEvent)
        .def("SetDialogNameTag", &UGearboxDialogInterface::SetDialogNameTag)
        .def("GetReplicatedDialogData", &UGearboxDialogInterface::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &UGearboxDialogInterface::SetReplicatedDialogData)
        .def("GetDialogGroups", &UGearboxDialogInterface::GetDialogGroups)
        .def("GetDialogComponent", &UGearboxDialogInterface::GetDialogComponent, py::return_value_policy::reference)
        .def("GetDialogNameTag", &UGearboxDialogInterface::GetDialogNameTag, py::return_value_policy::reference)
        .def("GetActor", &UGearboxDialogInterface::GetActor, py::return_value_policy::reference)
        .def("CanTalk", &UGearboxDialogInterface::CanTalk)
          ;
}