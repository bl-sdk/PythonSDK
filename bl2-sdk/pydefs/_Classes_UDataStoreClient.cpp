#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDataStoreClient(py::object m)
{
    py::class_< UDataStoreClient,  UUIRoot   >(m, "UDataStoreClient")
        .def_readwrite("GlobalDataStoreClasses", &UDataStoreClient::GlobalDataStoreClasses)
        .def_readwrite("GlobalDataStores", &UDataStoreClient::GlobalDataStores)
        .def_readwrite("PlayerDataStoreClassNames", &UDataStoreClient::PlayerDataStoreClassNames)
        .def_readwrite("PlayerDataStoreClasses", &UDataStoreClient::PlayerDataStoreClasses)
        .def_readwrite("PlayerDataStores", &UDataStoreClient::PlayerDataStores)
        .def("StaticClass", &UDataStoreClient::StaticClass, py::return_value_policy::reference)
        .def("DebugDumpDataStoreInfo", &UDataStoreClient::DebugDumpDataStoreInfo)
        .def("eventNotifyGameSessionEnded", &UDataStoreClient::eventNotifyGameSessionEnded)
        .def("FindDataStoreClass", &UDataStoreClient::FindDataStoreClass, py::return_value_policy::reference)
        .def("GetPlayerDataStoreClasses", &UDataStoreClient::GetPlayerDataStoreClasses)
        .def("FindPlayerDataStoreIndex", &UDataStoreClient::FindPlayerDataStoreIndex)
        .def("UnregisterDataStore", &UDataStoreClient::UnregisterDataStore)
        .def("RegisterDataStore", &UDataStoreClient::RegisterDataStore)
        .def("CreateDataStore", &UDataStoreClient::CreateDataStore, py::return_value_policy::reference)
        .def("FindDataStore", &UDataStoreClient::FindDataStore, py::return_value_policy::reference)
          ;
}