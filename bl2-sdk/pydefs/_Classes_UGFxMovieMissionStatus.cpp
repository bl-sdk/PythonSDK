#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieMissionStatus()
{
    class_< UGFxMovieMissionStatus, bases< UWillowGFxMovie >  , boost::noncopyable>("UGFxMovieMissionStatus", no_init)
        .def("StaticClass", &UGFxMovieMissionStatus::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnClose", &UGFxMovieMissionStatus::eventOnClose)
        .def("CheckMissionState", &UGFxMovieMissionStatus::CheckMissionState)
        .def("OnTick", &UGFxMovieMissionStatus::OnTick)
        .def("eventStart", &UGFxMovieMissionStatus::eventStart)
        .staticmethod("StaticClass")
  ;
}