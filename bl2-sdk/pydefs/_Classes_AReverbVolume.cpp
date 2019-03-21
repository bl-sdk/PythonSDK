#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AReverbVolume()
{
    class_< AReverbVolume, bases< AVolume >  , boost::noncopyable>("AReverbVolume", no_init)
        .def_readwrite("Priority", &AReverbVolume::Priority)
        .def_readwrite("Settings", &AReverbVolume::Settings)
        .def_readwrite("AmbientZoneSettings", &AReverbVolume::AmbientZoneSettings)
        .def_readwrite("NextLowerPriorityVolume", &AReverbVolume::NextLowerPriorityVolume)
        .def("StaticClass", &AReverbVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}