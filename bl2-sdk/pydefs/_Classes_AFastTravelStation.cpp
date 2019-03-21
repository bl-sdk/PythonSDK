#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFastTravelStation()
{
    py::class_< AFastTravelStation,  ATravelStation   >("AFastTravelStation")
        .def_readwrite("TravelDefinition", &AFastTravelStation::TravelDefinition)
        .def("StaticClass", &AFastTravelStation::StaticClass, py::return_value_policy::reference)
        .def("CanResurrectHere", &AFastTravelStation::CanResurrectHere)
        .def("eventGetMapDisplayName", &AFastTravelStation::eventGetMapDisplayName)
        .def("GetHumanReadableName", &AFastTravelStation::GetHumanReadableName)
        .def("GetIsRegistered", &AFastTravelStation::GetIsRegistered)
        .def("GetTravelStationDefinition", &AFastTravelStation::GetTravelStationDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}