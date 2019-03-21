#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSettings(py::object m)
{
    py::class_< UWillowOnlineGameSettings,  UOnlineGameSettings   >(m, "UWillowOnlineGameSettings")
        .def("StaticClass", &UWillowOnlineGameSettings::StaticClass, py::return_value_policy::reference)
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
          ;
}