#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlinePlaylists()
{
    py::class_< UUIDataStore_OnlinePlaylists,  UUIDataStore   >("UUIDataStore_OnlinePlaylists")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlinePlaylists::VfTable_IUIListElementProvider)
        .def_readwrite("ProviderClassName", &UUIDataStore_OnlinePlaylists::ProviderClassName)
        .def_readwrite("ProviderClass", &UUIDataStore_OnlinePlaylists::ProviderClass)
        .def_readwrite("RankedDataProviders", &UUIDataStore_OnlinePlaylists::RankedDataProviders)
        .def_readwrite("UnrankedDataProviders", &UUIDataStore_OnlinePlaylists::UnrankedDataProviders)
        .def_readwrite("RecModeDataProviders", &UUIDataStore_OnlinePlaylists::RecModeDataProviders)
        .def_readwrite("PrivateDataProviders", &UUIDataStore_OnlinePlaylists::PrivateDataProviders)
        .def_readwrite("PlaylistMan", &UUIDataStore_OnlinePlaylists::PlaylistMan)
        .def("StaticClass", &UUIDataStore_OnlinePlaylists::StaticClass, py::return_value_policy::reference)
        .def("eventGetMatchTypeForPlaylistId", &UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId)
        .def("GetOnlinePlaylistProvider", &UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider, py::return_value_policy::reference)
        .def("GetPlaylistProvider", &UUIDataStore_OnlinePlaylists::GetPlaylistProvider)
        .def("FindProviderIndexByFieldValue", &UUIDataStore_OnlinePlaylists::FindProviderIndexByFieldValue)
        .def("GetProviderFieldValue", &UUIDataStore_OnlinePlaylists::GetProviderFieldValue)
        .def("GetResourceProviderFields", &UUIDataStore_OnlinePlaylists::GetResourceProviderFields)
        .def("GetResourceProviders", &UUIDataStore_OnlinePlaylists::GetResourceProviders)
        .def("GetProviderCount", &UUIDataStore_OnlinePlaylists::GetProviderCount)
        .def("eventInit", &UUIDataStore_OnlinePlaylists::eventInit)
        .staticmethod("StaticClass")
  ;
}