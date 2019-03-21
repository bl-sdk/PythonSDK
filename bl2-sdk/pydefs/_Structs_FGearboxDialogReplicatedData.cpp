#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxDialogReplicatedData()
{
    class_< FGearboxDialogReplicatedData >("FGearboxDialogReplicatedData", no_init)
        .def_readwrite("Pitch", &FGearboxDialogReplicatedData::Pitch)
        .def_readwrite("TalkAkEvent", &FGearboxDialogReplicatedData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogReplicatedData::AkAudioUniqueID)
        .def_readwrite("TalkAct", &FGearboxDialogReplicatedData::TalkAct)
        .def_readwrite("EventTag", &FGearboxDialogReplicatedData::EventTag)
  ;
}