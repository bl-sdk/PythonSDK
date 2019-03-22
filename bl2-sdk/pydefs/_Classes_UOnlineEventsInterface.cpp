#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterface(py::module &m)
{
    py::class_< UOnlineEventsInterface,  UInterface   >(m, "UOnlineEventsInterface")
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterface::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterface::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterface::UploadPlayerData)
          ;
}