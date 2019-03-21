#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlinePlaylistProvider()
{
    class_< UOnlinePlaylistProvider, bases< UUIResourceDataProvider >  , boost::noncopyable>("UOnlinePlaylistProvider", no_init)
        .def_readwrite("PlaylistId", &UOnlinePlaylistProvider::PlaylistId)
        .def_readwrite("PlaylistGameTypeNames", &UOnlinePlaylistProvider::PlaylistGameTypeNames)
        .def_readwrite("DisplayName", &UOnlinePlaylistProvider::DisplayName)
        .def_readwrite("Priority", &UOnlinePlaylistProvider::Priority)
        .def("StaticClass", &UOnlinePlaylistProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}