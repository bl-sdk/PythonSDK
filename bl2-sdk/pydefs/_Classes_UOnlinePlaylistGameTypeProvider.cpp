#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlinePlaylistGameTypeProvider(py::module &m)
{
    py::class_< UOnlinePlaylistGameTypeProvider,  UUIResourceDataProvider   >(m, "UOnlinePlaylistGameTypeProvider")
        .def_readwrite("PlaylistGameTypeName", &UOnlinePlaylistGameTypeProvider::PlaylistGameTypeName)
        .def_readwrite("DisplayName", &UOnlinePlaylistGameTypeProvider::DisplayName)
        .def_readwrite("Description", &UOnlinePlaylistGameTypeProvider::Description)
        .def_readwrite("GameTypeId", &UOnlinePlaylistGameTypeProvider::GameTypeId)
          ;
}