#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryAkAmbientSound()
{
    class_< UActorFactoryAkAmbientSound, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryAkAmbientSound", no_init)
        .def_readwrite("AmbientEvent", &UActorFactoryAkAmbientSound::AmbientEvent)
        .def("StaticClass", &UActorFactoryAkAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}