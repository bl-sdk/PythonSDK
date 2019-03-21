#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationsLookup(py::object m)
{
    py::class_< UFastTravelStationsLookup,  UObject   >(m, "UFastTravelStationsLookup")
        .def_readwrite("FastTravelStationLookupList", &UFastTravelStationsLookup::FastTravelStationLookupList)
        .def_readwrite("LevelTravelStationLookupList", &UFastTravelStationsLookup::LevelTravelStationLookupList)
        .def("StaticClass", &UFastTravelStationsLookup::StaticClass, py::return_value_policy::reference)
        .def("AddStationToNameListInOrder", &UFastTravelStationsLookup::AddStationToNameListInOrder)
        .def("TravelStationIsSafe", &UFastTravelStationsLookup::TravelStationIsSafe)
        .def("GetStartingTravelStation", &UFastTravelStationsLookup::GetStartingTravelStation, py::return_value_policy::reference)
        .def("GetStationsForLevel", &UFastTravelStationsLookup::GetStationsForLevel)
        .def("GetLocation", &UFastTravelStationsLookup::GetLocation)
        .def("GetDefaultStationForLevel", &UFastTravelStationsLookup::GetDefaultStationForLevel, py::return_value_policy::reference)
        .def("GetLevelName", &UFastTravelStationsLookup::GetLevelName)
        .def("GetDisplayImage", &UFastTravelStationsLookup::GetDisplayImage, py::return_value_policy::reference)
        .def("GetDescription", &UFastTravelStationsLookup::GetDescription)
        .def("GetDisplayName", &UFastTravelStationsLookup::GetDisplayName)
        .def("FindTravelStationLookupObject", &UFastTravelStationsLookup::FindTravelStationLookupObject, py::return_value_policy::reference)
        .def("FindFastTravelStationLookupObject", &UFastTravelStationsLookup::FindFastTravelStationLookupObject, py::return_value_policy::reference)
          ;
}