#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USoundMode()
{
    class_< USoundMode, bases< UObject >  , boost::noncopyable>("USoundMode", no_init)
        .def_readwrite("EQSettings", &USoundMode::EQSettings)
        .def_readwrite("SoundClassEffects", &USoundMode::SoundClassEffects)
        .def_readwrite("InitialDelay", &USoundMode::InitialDelay)
        .def_readwrite("FadeInTime", &USoundMode::FadeInTime)
        .def_readwrite("Duration", &USoundMode::Duration)
        .def_readwrite("FadeOutTime", &USoundMode::FadeOutTime)
        .def("StaticClass", &USoundMode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}