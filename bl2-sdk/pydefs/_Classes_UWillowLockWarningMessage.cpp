#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowLockWarningMessage()
{
    class_< UWillowLockWarningMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UWillowLockWarningMessage", no_init)
        .def_readwrite("MissileLockOnString", &UWillowLockWarningMessage::MissileLockOnString)
        .def_readwrite("AvrilLockOnString", &UWillowLockWarningMessage::AvrilLockOnString)
        .def_readwrite("RadarLockString", &UWillowLockWarningMessage::RadarLockString)
        .def_readwrite("SPMAAcquiredString", &UWillowLockWarningMessage::SPMAAcquiredString)
        .def_readwrite("RedColor", &UWillowLockWarningMessage::RedColor)
        .def_readwrite("YellowColor", &UWillowLockWarningMessage::YellowColor)
        .def("StaticClass", &UWillowLockWarningMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetColor", &UWillowLockWarningMessage::GetColor)
        .def("GetString", &UWillowLockWarningMessage::GetString)
        .def("AnnouncementLevel", &UWillowLockWarningMessage::AnnouncementLevel)
        .staticmethod("StaticClass")
  ;
}