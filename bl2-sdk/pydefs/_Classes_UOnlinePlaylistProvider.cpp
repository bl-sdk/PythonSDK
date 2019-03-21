#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlinePlaylistProvider(py::object m)
{
    py::class_< UOnlinePlaylistProvider,  UUIResourceDataProvider   >(m, "UOnlinePlaylistProvider")
        .def_readwrite("PlaylistId", &UOnlinePlaylistProvider::PlaylistId)
        .def_readwrite("PlaylistGameTypeNames", &UOnlinePlaylistProvider::PlaylistGameTypeNames)
        .def_readwrite("DisplayName", &UOnlinePlaylistProvider::DisplayName)
        .def_readwrite("Priority", &UOnlinePlaylistProvider::Priority)
        .def("StaticClass", &UOnlinePlaylistProvider::StaticClass, py::return_value_policy::reference)
          ;
}