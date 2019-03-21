#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterface()
{
    class_< UOnlineEventsInterface, bases< UInterface >  , boost::noncopyable>("UOnlineEventsInterface", no_init)
        .def("StaticClass", &UOnlineEventsInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterface::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterface::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterface::UploadPlayerData)
        .staticmethod("StaticClass")
  ;
}