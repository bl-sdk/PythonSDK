#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlaylist()
{
    class_< FPlaylist >("FPlaylist", no_init)
        .def_readwrite("ConfiguredGames", &FPlaylist::ConfiguredGames)
        .def_readwrite("PlaylistId", &FPlaylist::PlaylistId)
        .def_readwrite("LoadBalanceId", &FPlaylist::LoadBalanceId)
        .def_readwrite("LocalizationString", &FPlaylist::LocalizationString)
        .def_readwrite("ContentIds", &FPlaylist::ContentIds)
        .def_readwrite("TeamSize", &FPlaylist::TeamSize)
        .def_readwrite("TeamCount", &FPlaylist::TeamCount)
        .def_readwrite("MaxPartySize", &FPlaylist::MaxPartySize)
        .def_readwrite("Name", &FPlaylist::Name)
        .def_readwrite("URL", &FPlaylist::URL)
        .def_readwrite("MatchType", &FPlaylist::MatchType)
        .def_readwrite("MapCycle", &FPlaylist::MapCycle)
        .def_readwrite("InventorySwaps", &FPlaylist::InventorySwaps)
  ;
}