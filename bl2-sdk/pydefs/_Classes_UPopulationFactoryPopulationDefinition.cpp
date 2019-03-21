#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryPopulationDefinition()
{
    class_< UPopulationFactoryPopulationDefinition, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryPopulationDefinition", no_init)
        .def_readwrite("PopulationDef", &UPopulationFactoryPopulationDefinition::PopulationDef)
        .def("StaticClass", &UPopulationFactoryPopulationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSpawnFactory", &UPopulationFactoryPopulationDefinition::GetSpawnFactory, return_value_policy< reference_existing_object >())
        .def("GetActorAllegiance", &UPopulationFactoryPopulationDefinition::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("IsFactoryWithin", &UPopulationFactoryPopulationDefinition::IsFactoryWithin)
        .staticmethod("StaticClass")
  ;
}