#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieMissionStatus()
{
    py::class_< UGFxMovieMissionStatus,  UWillowGFxMovie   >("UGFxMovieMissionStatus")
        .def("StaticClass", &UGFxMovieMissionStatus::StaticClass, py::return_value_policy::reference)
        .def("eventOnClose", &UGFxMovieMissionStatus::eventOnClose)
        .def("CheckMissionState", &UGFxMovieMissionStatus::CheckMissionState)
        .def("OnTick", &UGFxMovieMissionStatus::OnTick)
        .def("eventStart", &UGFxMovieMissionStatus::eventStart)
        .staticmethod("StaticClass")
  ;
}