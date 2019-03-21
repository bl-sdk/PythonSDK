#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APlayerKillVolume()
{
    class_< APlayerKillVolume, bases< AVolume >  , boost::noncopyable>("APlayerKillVolume", no_init)
        .def("StaticClass", &APlayerKillVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("KillAIPawn", &APlayerKillVolume::KillAIPawn)
        .def("GetBestKillerFor", &APlayerKillVolume::GetBestKillerFor, return_value_policy< reference_existing_object >())
        .def("eventTouch", &APlayerKillVolume::eventTouch)
        .staticmethod("StaticClass")
  ;
}