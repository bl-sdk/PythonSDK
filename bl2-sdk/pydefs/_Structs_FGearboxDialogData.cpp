#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxDialogData(py::object m)
{
    py::class_< FGearboxDialogData >(m, "FGearboxDialogData")
        .def_readwrite("NameTag", &FGearboxDialogData::NameTag)
        .def_readwrite("TalkAkEvent", &FGearboxDialogData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogData::AkAudioUniqueID)
        .def_readwrite("Pitch", &FGearboxDialogData::Pitch)
  ;
}