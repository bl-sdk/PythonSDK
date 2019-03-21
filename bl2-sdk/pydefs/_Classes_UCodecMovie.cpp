#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCodecMovie()
{
    class_< UCodecMovie, bases< UObject >  , boost::noncopyable>("UCodecMovie", no_init)
        .def_readwrite("PlaybackDuration", &UCodecMovie::PlaybackDuration)
        .def("StaticClass", &UCodecMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}