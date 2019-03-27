#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxDialogReplicatedData(py::module &m)
{
    py::class_< FGearboxDialogReplicatedData >(m, "FGearboxDialogReplicatedData")
        .def_readwrite("Pitch", &FGearboxDialogReplicatedData::Pitch)
        .def_readwrite("TalkAkEvent", &FGearboxDialogReplicatedData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogReplicatedData::AkAudioUniqueID)
        .def_readwrite("TalkAct", &FGearboxDialogReplicatedData::TalkAct)
        .def_readwrite("EventTag", &FGearboxDialogReplicatedData::EventTag)
  ;
}