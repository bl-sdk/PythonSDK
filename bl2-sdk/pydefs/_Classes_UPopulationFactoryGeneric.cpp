#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryGeneric()
{
    class_< UPopulationFactoryGeneric, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryGeneric", no_init)
        .def_readwrite("ActorArchetype", &UPopulationFactoryGeneric::ActorArchetype)
        .def("StaticClass", &UPopulationFactoryGeneric::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventCreatePopulationActor", &UPopulationFactoryGeneric::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryGeneric::eventGetSpawnVisibilityBounds)
        .staticmethod("StaticClass")
  ;
}