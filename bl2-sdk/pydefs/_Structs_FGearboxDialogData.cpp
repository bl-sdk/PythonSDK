#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxDialogData()
{
    py::class_< FGearboxDialogData >("FGearboxDialogData")
        .def_readwrite("NameTag", &FGearboxDialogData::NameTag)
        .def_readwrite("TalkAkEvent", &FGearboxDialogData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogData::AkAudioUniqueID)
        .def_readwrite("Pitch", &FGearboxDialogData::Pitch)
  ;
}