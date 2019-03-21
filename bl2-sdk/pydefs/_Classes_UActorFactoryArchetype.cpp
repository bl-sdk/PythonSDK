#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryArchetype()
{
    class_< UActorFactoryArchetype, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryArchetype", no_init)
        .def_readwrite("ArchetypeActor", &UActorFactoryArchetype::ArchetypeActor)
        .def("StaticClass", &UActorFactoryArchetype::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}