#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUBMGraveyardSaveData()
{
    py::class_< UUBMGraveyardSaveData,  UObject   >("UUBMGraveyardSaveData")
        .def_readwrite("TombstoneList", &UUBMGraveyardSaveData::TombstoneList)
        .def("StaticClass", &UUBMGraveyardSaveData::StaticClass, py::return_value_policy::reference)
        .def("GetFormattedChallengesComplete", &UUBMGraveyardSaveData::GetFormattedChallengesComplete)
        .def("GetFormattedMissionsComplete", &UUBMGraveyardSaveData::GetFormattedMissionsComplete)
        .def("GetFormattedCharacterLevel", &UUBMGraveyardSaveData::GetFormattedCharacterLevel)
        .def("GetFormattedTotalTimePlayed", &UUBMGraveyardSaveData::GetFormattedTotalTimePlayed)
        .def("GetLatestTombstoneData", &UUBMGraveyardSaveData::GetLatestTombstoneData)
        .def("AddTombstone", &UUBMGraveyardSaveData::AddTombstone)
        .staticmethod("StaticClass")
  ;
}