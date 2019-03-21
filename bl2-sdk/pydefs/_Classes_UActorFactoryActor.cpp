#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryActor()
{
    class_< UActorFactoryActor, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryActor", no_init)
        .def_readwrite("ActorClass", &UActorFactoryActor::ActorClass)
        .def("StaticClass", &UActorFactoryActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}