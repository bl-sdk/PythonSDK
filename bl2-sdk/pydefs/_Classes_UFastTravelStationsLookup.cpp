#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelStationsLookup()
{
    class_< UFastTravelStationsLookup, bases< UObject >  , boost::noncopyable>("UFastTravelStationsLookup", no_init)
        .def_readwrite("FastTravelStationLookupList", &UFastTravelStationsLookup::FastTravelStationLookupList)
        .def_readwrite("LevelTravelStationLookupList", &UFastTravelStationsLookup::LevelTravelStationLookupList)
        .def("StaticClass", &UFastTravelStationsLookup::StaticClass, return_value_policy< reference_existing_object >())
        .def("AddStationToNameListInOrder", &UFastTravelStationsLookup::AddStationToNameListInOrder)
        .def("TravelStationIsSafe", &UFastTravelStationsLookup::TravelStationIsSafe)
        .def("GetStartingTravelStation", &UFastTravelStationsLookup::GetStartingTravelStation, return_value_policy< reference_existing_object >())
        .def("GetStationsForLevel", &UFastTravelStationsLookup::GetStationsForLevel)
        .def("GetLocation", &UFastTravelStationsLookup::GetLocation)
        .def("GetDefaultStationForLevel", &UFastTravelStationsLookup::GetDefaultStationForLevel, return_value_policy< reference_existing_object >())
        .def("GetLevelName", &UFastTravelStationsLookup::GetLevelName)
        .def("GetDisplayImage", &UFastTravelStationsLookup::GetDisplayImage, return_value_policy< reference_existing_object >())
        .def("GetDescription", &UFastTravelStationsLookup::GetDescription)
        .def("GetDisplayName", &UFastTravelStationsLookup::GetDisplayName)
        .def("FindTravelStationLookupObject", &UFastTravelStationsLookup::FindTravelStationLookupObject, return_value_policy< reference_existing_object >())
        .def("FindFastTravelStationLookupObject", &UFastTravelStationsLookup::FindFastTravelStationLookupObject, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}