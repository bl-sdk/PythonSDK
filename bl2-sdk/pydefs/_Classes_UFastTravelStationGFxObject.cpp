#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationGFxObject(py::module &m)
{
    py::class_< UFastTravelStationGFxObject,  UGFxObject   >(m, "UFastTravelStationGFxObject")
        .def("StaticClass", &UFastTravelStationGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetCurrentWaypoint", &UFastTravelStationGFxObject::SetCurrentWaypoint)
        .def("SetSortMode", &UFastTravelStationGFxObject::SetSortMode)
        .def("SendLocationData", &UFastTravelStationGFxObject::SendLocationData)
        .def("ScrollLocationListDown", &UFastTravelStationGFxObject::ScrollLocationListDown)
        .def("ScrollLocationListUp", &UFastTravelStationGFxObject::ScrollLocationListUp)
        .def("RegisterMapLocationBlob", &UFastTravelStationGFxObject::RegisterMapLocationBlob)
        .def("CacheLocationMissionData", &UFastTravelStationGFxObject::CacheLocationMissionData)
        .def("AddDLCMapLocations", &UFastTravelStationGFxObject::AddDLCMapLocations)
          ;
}