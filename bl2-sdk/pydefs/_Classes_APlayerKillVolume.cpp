#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerKillVolume()
{
    py::class_< APlayerKillVolume,  AVolume   >("APlayerKillVolume")
        .def("StaticClass", &APlayerKillVolume::StaticClass, py::return_value_policy::reference)
        .def("KillAIPawn", &APlayerKillVolume::KillAIPawn)
        .def("GetBestKillerFor", &APlayerKillVolume::GetBestKillerFor, py::return_value_policy::reference)
        .def("eventTouch", &APlayerKillVolume::eventTouch)
        .staticmethod("StaticClass")
  ;
}