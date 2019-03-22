#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLockWarningMessage(py::module &m)
{
    py::class_< UWillowLockWarningMessage,  UWillowLocalMessage   >(m, "UWillowLockWarningMessage")
        .def_readwrite("MissileLockOnString", &UWillowLockWarningMessage::MissileLockOnString)
        .def_readwrite("AvrilLockOnString", &UWillowLockWarningMessage::AvrilLockOnString)
        .def_readwrite("RadarLockString", &UWillowLockWarningMessage::RadarLockString)
        .def_readwrite("SPMAAcquiredString", &UWillowLockWarningMessage::SPMAAcquiredString)
        .def_readwrite("RedColor", &UWillowLockWarningMessage::RedColor)
        .def_readwrite("YellowColor", &UWillowLockWarningMessage::YellowColor)
        .def("StaticClass", &UWillowLockWarningMessage::StaticClass, py::return_value_policy::reference)
        .def("GetColor", &UWillowLockWarningMessage::GetColor)
        .def("GetString", &UWillowLockWarningMessage::GetString)
        .def("AnnouncementLevel", &UWillowLockWarningMessage::AnnouncementLevel)
          ;
}