#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxDialogData()
{
    class_< FGearboxDialogData >("FGearboxDialogData", no_init)
        .def_readwrite("NameTag", &FGearboxDialogData::NameTag)
        .def_readwrite("TalkAkEvent", &FGearboxDialogData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogData::AkAudioUniqueID)
        .def_readwrite("Pitch", &FGearboxDialogData::Pitch)
  ;
}