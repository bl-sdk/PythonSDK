#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAkAmbientSound()
{
    class_< AAkAmbientSound, bases< AKeypoint >  , boost::noncopyable>("AAkAmbientSound", no_init)
        .def_readwrite("PlayEvent", &AAkAmbientSound::PlayEvent)
        .def_readwrite("Group", &AAkAmbientSound::Group)
        .def("StaticClass", &AAkAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}