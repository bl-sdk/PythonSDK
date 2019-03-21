#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlinePlaylists()
{
    class_< UUIDataStore_OnlinePlaylists, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_OnlinePlaylists", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlinePlaylists::VfTable_IUIListElementProvider)
        .def_readwrite("ProviderClassName", &UUIDataStore_OnlinePlaylists::ProviderClassName)
        .def_readwrite("ProviderClass", &UUIDataStore_OnlinePlaylists::ProviderClass)
        .def_readwrite("RankedDataProviders", &UUIDataStore_OnlinePlaylists::RankedDataProviders)
        .def_readwrite("UnrankedDataProviders", &UUIDataStore_OnlinePlaylists::UnrankedDataProviders)
        .def_readwrite("RecModeDataProviders", &UUIDataStore_OnlinePlaylists::RecModeDataProviders)
        .def_readwrite("PrivateDataProviders", &UUIDataStore_OnlinePlaylists::PrivateDataProviders)
        .def_readwrite("PlaylistMan", &UUIDataStore_OnlinePlaylists::PlaylistMan)
        .def("StaticClass", &UUIDataStore_OnlinePlaylists::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetMatchTypeForPlaylistId", &UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId)
        .def("GetOnlinePlaylistProvider", &UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider, return_value_policy< reference_existing_object >())
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