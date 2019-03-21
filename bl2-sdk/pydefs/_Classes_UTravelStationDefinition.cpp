#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTravelStationDefinition()
{
    class_< UTravelStationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UTravelStationDefinition", no_init)
        .def_readwrite("StationLevelName", &UTravelStationDefinition::StationLevelName)
        .def_readwrite("PreviousStation", &UTravelStationDefinition::PreviousStation)
        .def_readwrite("DlcExpansion", &UTravelStationDefinition::DlcExpansion)
        .def_readwrite("StationLocation", &UTravelStationDefinition::StationLocation)
        .def_readwrite("StationDisplayImage", &UTravelStationDefinition::StationDisplayImage)
        .def_readwrite("StationDisplayName", &UTravelStationDefinition::StationDisplayName)
        .def_readwrite("MissionDependencies", &UTravelStationDefinition::MissionDependencies)
        .def("StaticClass", &UTravelStationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("StaticGetAccessibleLevelName", &UTravelStationDefinition::StaticGetAccessibleLevelName)
        .def("GetStationLevelName", &UTravelStationDefinition::GetStationLevelName)
        .staticmethod("StaticClass")
  ;
}