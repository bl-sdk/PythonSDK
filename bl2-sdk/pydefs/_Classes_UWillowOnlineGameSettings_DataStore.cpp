#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSettings_DataStore()
{
    class_< UWillowOnlineGameSettings_DataStore, bases< UUIDataStore_OnlineGameSettings >  , boost::noncopyable>("UWillowOnlineGameSettings_DataStore", no_init)
        .def("StaticClass", &UWillowOnlineGameSettings_DataStore::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetPlaythrough", &UWillowOnlineGameSettings_DataStore::GetPlaythrough)
        .def("GetLevel", &UWillowOnlineGameSettings_DataStore::GetLevel)
        .def("OnGameCreated", &UWillowOnlineGameSettings_DataStore::OnGameCreated)
        .def("eventCreateGame", &UWillowOnlineGameSettings_DataStore::eventCreateGame)
        .staticmethod("StaticClass")
  ;
}