#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterface(py::object m)
{
    py::class_< UOnlineEventsInterface,  UInterface   >(m, "UOnlineEventsInterface")
        .def("StaticClass", &UOnlineEventsInterface::StaticClass, py::return_value_policy::reference)
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterface::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterface::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterface::UploadPlayerData)
          ;
}