#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSettings()
{
    class_< UWillowOnlineGameSettings, bases< UOnlineGameSettings >  , boost::noncopyable>("UWillowOnlineGameSettings", no_init)
        .def("StaticClass", &UWillowOnlineGameSettings::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetConnectionQualityUIString", &UWillowOnlineGameSettings::GetConnectionQualityUIString)
        .def("UpdateActivePlotMission", &UWillowOnlineGameSettings::UpdateActivePlotMission)
        .def("GetActivePlotMission", &UWillowOnlineGameSettings::GetActivePlotMission)
        .def("UpdateIsPublic", &UWillowOnlineGameSettings::UpdateIsPublic)
        .def("UpdateExpLevel", &UWillowOnlineGameSettings::UpdateExpLevel)
        .def("GetExpLevel", &UWillowOnlineGameSettings::GetExpLevel)
        .def("UpdateDlcFlag", &UWillowOnlineGameSettings::UpdateDlcFlag)
        .def("UpdateMapDlcContentId", &UWillowOnlineGameSettings::UpdateMapDlcContentId)
        .def("UpdatePlaythrough", &UWillowOnlineGameSettings::UpdatePlaythrough)
        .def("GetPlaythrough", &UWillowOnlineGameSettings::GetPlaythrough)
        .def("UpdateActiveMission", &UWillowOnlineGameSettings::UpdateActiveMission)
        .staticmethod("StaticClass")
  ;
}