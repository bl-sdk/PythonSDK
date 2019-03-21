#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelTravelStationDefinition()
{
    class_< ULevelTravelStationDefinition, bases< UTravelStationDefinition >  , boost::noncopyable>("ULevelTravelStationDefinition", no_init)
        .def_readwrite("DestinationStationDefinition", &ULevelTravelStationDefinition::DestinationStationDefinition)
        .def_readwrite("DisplayName", &ULevelTravelStationDefinition::DisplayName)
        .def("StaticClass", &ULevelTravelStationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}