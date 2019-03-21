#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAmbientSound()
{
    class_< AAmbientSound, bases< AKeypoint >  , boost::noncopyable>("AAmbientSound", no_init)
        .def_readwrite("AudioComponent", &AAmbientSound::AudioComponent)
        .def("StaticClass", &AAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}