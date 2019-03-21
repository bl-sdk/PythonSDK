#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoadCharacterData()
{
    py::class_< FLoadCharacterData >("FLoadCharacterData")
        .def_readwrite("SaveDataId", &FLoadCharacterData::SaveDataId)
        .def_readwrite("CharLevel", &FLoadCharacterData::CharLevel)
        .def_readwrite("CharName", &FLoadCharacterData::CharName)
        .def_readwrite("CharClass", &FLoadCharacterData::CharClass)
        .def_readwrite("PlayThrough", &FLoadCharacterData::PlayThrough)
        .def_readwrite("ActiveMission", &FLoadCharacterData::ActiveMission)
        .def_readwrite("PlotMission", &FLoadCharacterData::PlotMission)
        .def_readwrite("CharSaveDate", &FLoadCharacterData::CharSaveDate)
        .def_readwrite("CharPlayedTime", &FLoadCharacterData::CharPlayedTime)
        .def_readwrite("CharPlayedTimeInt", &FLoadCharacterData::CharPlayedTimeInt)
        .def_readwrite("SaveGuid", &FLoadCharacterData::SaveGuid)
        .def_readwrite("DlcCharDef", &FLoadCharacterData::DlcCharDef)
  ;
}