#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationSpawnedActorTagDefinition()
{
    class_< UPopulationSpawnedActorTagDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPopulationSpawnedActorTagDefinition", no_init)
        .def("StaticClass", &UPopulationSpawnedActorTagDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}