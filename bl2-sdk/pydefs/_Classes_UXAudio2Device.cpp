#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UXAudio2Device()
{
    class_< UXAudio2Device, bases< UAudioDevice >  , boost::noncopyable>("UXAudio2Device", no_init)
        .def_readonly("UnknownData00", &UXAudio2Device::UnknownData00)
        .def("StaticClass", &UXAudio2Device::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}