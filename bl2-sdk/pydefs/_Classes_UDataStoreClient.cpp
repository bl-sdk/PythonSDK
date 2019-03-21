#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDataStoreClient()
{
    class_< UDataStoreClient, bases< UUIRoot >  , boost::noncopyable>("UDataStoreClient", no_init)
        .def_readwrite("GlobalDataStoreClasses", &UDataStoreClient::GlobalDataStoreClasses)
        .def_readwrite("GlobalDataStores", &UDataStoreClient::GlobalDataStores)
        .def_readwrite("PlayerDataStoreClassNames", &UDataStoreClient::PlayerDataStoreClassNames)
        .def_readwrite("PlayerDataStoreClasses", &UDataStoreClient::PlayerDataStoreClasses)
        .def_readwrite("PlayerDataStores", &UDataStoreClient::PlayerDataStores)
        .def("StaticClass", &UDataStoreClient::StaticClass, return_value_policy< reference_existing_object >())
        .def("DebugDumpDataStoreInfo", &UDataStoreClient::DebugDumpDataStoreInfo)
        .def("eventNotifyGameSessionEnded", &UDataStoreClient::eventNotifyGameSessionEnded)
        .def("FindDataStoreClass", &UDataStoreClient::FindDataStoreClass, return_value_policy< reference_existing_object >())
        .def("GetPlayerDataStoreClasses", &UDataStoreClient::GetPlayerDataStoreClasses)
        .def("FindPlayerDataStoreIndex", &UDataStoreClient::FindPlayerDataStoreIndex)
        .def("UnregisterDataStore", &UDataStoreClient::UnregisterDataStore)
        .def("RegisterDataStore", &UDataStoreClient::RegisterDataStore)
        .def("CreateDataStore", &UDataStoreClient::CreateDataStore, return_value_policy< reference_existing_object >())
        .def("FindDataStore", &UDataStoreClient::FindDataStore, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}