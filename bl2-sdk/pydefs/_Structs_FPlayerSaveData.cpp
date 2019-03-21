#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerSaveData(py::object m)
{
    py::class_< FPlayerSaveData >(m, "FPlayerSaveData")
        .def_readwrite("FilePath", &FPlayerSaveData::FilePath)
        .def_readwrite("TimeStamp", &FPlayerSaveData::TimeStamp)
        .def_readwrite("PlayerClassDefName", &FPlayerSaveData::PlayerClassDefName)
        .def_readwrite("ClassName", &FPlayerSaveData::ClassName)
        .def_readwrite("CharacterName", &FPlayerSaveData::CharacterName)
        .def_readwrite("ExpLevel", &FPlayerSaveData::ExpLevel)
        .def_readonly("CurrencyOnHand", &FPlayerSaveData::CurrencyOnHand)
        .def_readwrite("UICharacterName", &FPlayerSaveData::UICharacterName)
        .def_readwrite("PlaythroughsCompleted", &FPlayerSaveData::PlaythroughsCompleted)
        .def_readwrite("LastVisitedTeleporter", &FPlayerSaveData::LastVisitedTeleporter)
        .def_readwrite("ActiveMissionNumber", &FPlayerSaveData::ActiveMissionNumber)
        .def_readwrite("PlotMissionNumber", &FPlayerSaveData::PlotMissionNumber)
        .def_readwrite("TotalPlayTime", &FPlayerSaveData::TotalPlayTime)
        .def_readwrite("LastPlaythroughNumber", &FPlayerSaveData::LastPlaythroughNumber)
        .def_readwrite("LastSaveDate", &FPlayerSaveData::LastSaveDate)
        .def_readwrite("SaveGuid", &FPlayerSaveData::SaveGuid)
        .def_readwrite("SaveGameFileId", &FPlayerSaveData::SaveGameFileId)
        .def_readwrite("ExpPoints", &FPlayerSaveData::ExpPoints)
  ;
}