#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlinePlaylistGameTypeProvider()
{
    class_< UOnlinePlaylistGameTypeProvider, bases< UUIResourceDataProvider >  , boost::noncopyable>("UOnlinePlaylistGameTypeProvider", no_init)
        .def_readwrite("PlaylistGameTypeName", &UOnlinePlaylistGameTypeProvider::PlaylistGameTypeName)
        .def_readwrite("DisplayName", &UOnlinePlaylistGameTypeProvider::DisplayName)
        .def_readwrite("Description", &UOnlinePlaylistGameTypeProvider::Description)
        .def_readwrite("GameTypeId", &UOnlinePlaylistGameTypeProvider::GameTypeId)
        .def("StaticClass", &UOnlinePlaylistGameTypeProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}