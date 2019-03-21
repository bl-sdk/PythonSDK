#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAwarenessZoneCollectionDefinition()
{
    class_< UAwarenessZoneCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAwarenessZoneCollectionDefinition", no_init)
        .def_readwrite("DefaultAwarenessZones", &UAwarenessZoneCollectionDefinition::DefaultAwarenessZones)
        .def_readwrite("CollectionName", &UAwarenessZoneCollectionDefinition::CollectionName)
        .def("StaticClass", &UAwarenessZoneCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}