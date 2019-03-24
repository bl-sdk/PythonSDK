#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFastTravelStation(py::module &m)
{
    py::class_< AFastTravelStation,  ATravelStation   >(m, "AFastTravelStation")
		.def_static("StaticClass", &AFastTravelStation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TravelDefinition", &AFastTravelStation::TravelDefinition)
        .def("CanResurrectHere", &AFastTravelStation::CanResurrectHere)
        .def("eventGetMapDisplayName", &AFastTravelStation::eventGetMapDisplayName)
        .def("GetHumanReadableName", &AFastTravelStation::GetHumanReadableName)
        .def("GetIsRegistered", &AFastTravelStation::GetIsRegistered)
        .def("GetTravelStationDefinition", &AFastTravelStation::GetTravelStationDefinition, py::return_value_policy::reference)
          ;
}