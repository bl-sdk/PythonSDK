#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTombstoneData(py::object m)
{
    py::class_< FTombstoneData >(m, "FTombstoneData")
        .def_readwrite("TotalTimePlayed", &FTombstoneData::TotalTimePlayed)
        .def_readwrite("CharacterLevel", &FTombstoneData::CharacterLevel)
        .def_readwrite("PercentMissionsComplete", &FTombstoneData::PercentMissionsComplete)
        .def_readwrite("PercentChallengesComplete", &FTombstoneData::PercentChallengesComplete)
        .def_readwrite("CharacterName", &FTombstoneData::CharacterName)
        .def_readwrite("FavoriteManufacturer", &FTombstoneData::FavoriteManufacturer)
        .def_readwrite("FavoriteWeaponType", &FTombstoneData::FavoriteWeaponType)
        .def_readwrite("KilledByDescription", &FTombstoneData::KilledByDescription)
        .def_readwrite("ScreenshotFilename", &FTombstoneData::ScreenshotFilename)
  ;
}