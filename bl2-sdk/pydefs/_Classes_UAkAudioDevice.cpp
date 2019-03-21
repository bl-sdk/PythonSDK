#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkAudioDevice()
{
    class_< UAkAudioDevice, bases< USubsystem >  , boost::noncopyable>("UAkAudioDevice", no_init)
        .def_readonly("UnknownData00", &UAkAudioDevice::UnknownData00)
        .def("StaticClass", &UAkAudioDevice::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}