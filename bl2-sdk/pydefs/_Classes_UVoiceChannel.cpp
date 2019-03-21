#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVoiceChannel()
{
    class_< UVoiceChannel, bases< UChannel >  , boost::noncopyable>("UVoiceChannel", no_init)
        .def_readonly("UnknownData00", &UVoiceChannel::UnknownData00)
        .def("StaticClass", &UVoiceChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}