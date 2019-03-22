#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlinePlaylists(py::module &m)
{
    py::class_< UUIDataStore_OnlinePlaylists,  UUIDataStore   >(m, "UUIDataStore_OnlinePlaylists")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlinePlaylists::VfTable_IUIListElementProvider)
        .def_readwrite("ProviderClassName", &UUIDataStore_OnlinePlaylists::ProviderClassName)
        .def_readwrite("ProviderClass", &UUIDataStore_OnlinePlaylists::ProviderClass)
        .def_readwrite("RankedDataProviders", &UUIDataStore_OnlinePlaylists::RankedDataProviders)
        .def_readwrite("UnrankedDataProviders", &UUIDataStore_OnlinePlaylists::UnrankedDataProviders)
        .def_readwrite("RecModeDataProviders", &UUIDataStore_OnlinePlaylists::RecModeDataProviders)
        .def_readwrite("PrivateDataProviders", &UUIDataStore_OnlinePlaylists::PrivateDataProviders)
        .def_readwrite("PlaylistMan", &UUIDataStore_OnlinePlaylists::PlaylistMan)
        .def("eventGetMatchTypeForPlaylistId", &UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId)
        .def("GetOnlinePlaylistProvider", [](UUIDataStore_OnlinePlaylists &self , struct FName ProviderTag, int PlaylistId) { int* pyProviderIndex = (int*)malloc(sizeof(int)) ;  class UOnlinePlaylistProvider* ret =  self.GetOnlinePlaylistProvider(ProviderTag, PlaylistId, pyProviderIndex); return py::make_tuple(ret, *pyProviderIndex); })
        .def("GetPlaylistProvider", [](UUIDataStore_OnlinePlaylists &self , struct FName ProviderTag, int ProviderIndex) { class UUIResourceDataProvider** pyout_Provider = 0 ;  bool ret =  self.GetPlaylistProvider(ProviderTag, ProviderIndex, pyout_Provider); return py::make_tuple(ret, *pyout_Provider); })
        .def("FindProviderIndexByFieldValue", &UUIDataStore_OnlinePlaylists::FindProviderIndexByFieldValue)
        .def("GetProviderFieldValue", &UUIDataStore_OnlinePlaylists::GetProviderFieldValue)
        .def("GetResourceProviderFields", &UUIDataStore_OnlinePlaylists::GetResourceProviderFields)
        .def("GetResourceProviders", &UUIDataStore_OnlinePlaylists::GetResourceProviders)
        .def("GetProviderCount", &UUIDataStore_OnlinePlaylists::GetProviderCount)
        .def("eventInit", &UUIDataStore_OnlinePlaylists::eventInit)
          ;
}