#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringZoneCollectionDefinition()
{
    class_< UFiringZoneCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFiringZoneCollectionDefinition", no_init)
        .def_readwrite("Zones", &UFiringZoneCollectionDefinition::Zones)
        .def("StaticClass", &UFiringZoneCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetZoneForDistance", &UFiringZoneCollectionDefinition::eventGetZoneForDistance, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}