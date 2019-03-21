#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUBMGraveyardSaveData()
{
    class_< UUBMGraveyardSaveData, bases< UObject >  , boost::noncopyable>("UUBMGraveyardSaveData", no_init)
        .def_readwrite("TombstoneList", &UUBMGraveyardSaveData::TombstoneList)
        .def("StaticClass", &UUBMGraveyardSaveData::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFormattedChallengesComplete", &UUBMGraveyardSaveData::GetFormattedChallengesComplete)
        .def("GetFormattedMissionsComplete", &UUBMGraveyardSaveData::GetFormattedMissionsComplete)
        .def("GetFormattedCharacterLevel", &UUBMGraveyardSaveData::GetFormattedCharacterLevel)
        .def("GetFormattedTotalTimePlayed", &UUBMGraveyardSaveData::GetFormattedTotalTimePlayed)
        .def("GetLatestTombstoneData", &UUBMGraveyardSaveData::GetLatestTombstoneData)
        .def("AddTombstone", &UUBMGraveyardSaveData::AddTombstone)
        .staticmethod("StaticClass")
  ;
}