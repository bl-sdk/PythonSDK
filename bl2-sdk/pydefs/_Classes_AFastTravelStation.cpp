#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFastTravelStation()
{
    class_< AFastTravelStation, bases< ATravelStation >  , boost::noncopyable>("AFastTravelStation", no_init)
        .def_readwrite("TravelDefinition", &AFastTravelStation::TravelDefinition)
        .def("StaticClass", &AFastTravelStation::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanResurrectHere", &AFastTravelStation::CanResurrectHere)
        .def("eventGetMapDisplayName", &AFastTravelStation::eventGetMapDisplayName)
        .def("GetHumanReadableName", &AFastTravelStation::GetHumanReadableName)
        .def("GetIsRegistered", &AFastTravelStation::GetIsRegistered)
        .def("GetTravelStationDefinition", &AFastTravelStation::GetTravelStationDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}