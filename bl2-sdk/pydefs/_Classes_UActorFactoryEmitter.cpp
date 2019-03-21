#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryEmitter()
{
    class_< UActorFactoryEmitter, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryEmitter", no_init)
        .def_readwrite("ParticleSystem", &UActorFactoryEmitter::ParticleSystem)
        .def("StaticClass", &UActorFactoryEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}