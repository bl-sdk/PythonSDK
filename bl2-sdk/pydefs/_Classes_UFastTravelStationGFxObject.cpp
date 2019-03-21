#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelStationGFxObject()
{
    class_< UFastTravelStationGFxObject, bases< UGFxObject >  , boost::noncopyable>("UFastTravelStationGFxObject", no_init)
        .def("StaticClass", &UFastTravelStationGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCurrentWaypoint", &UFastTravelStationGFxObject::SetCurrentWaypoint)
        .def("SetSortMode", &UFastTravelStationGFxObject::SetSortMode)
        .def("SendLocationData", &UFastTravelStationGFxObject::SendLocationData)
        .def("ScrollLocationListDown", &UFastTravelStationGFxObject::ScrollLocationListDown)
        .def("ScrollLocationListUp", &UFastTravelStationGFxObject::ScrollLocationListUp)
        .def("RegisterMapLocationBlob", &UFastTravelStationGFxObject::RegisterMapLocationBlob)
        .def("CacheLocationMissionData", &UFastTravelStationGFxObject::CacheLocationMissionData)
        .def("AddDLCMapLocations", &UFastTravelStationGFxObject::AddDLCMapLocations)
        .staticmethod("StaticClass")
  ;
}