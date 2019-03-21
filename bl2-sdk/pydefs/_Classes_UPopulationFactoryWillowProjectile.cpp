#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowProjectile()
{
    class_< UPopulationFactoryWillowProjectile, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryWillowProjectile", no_init)
        .def_readwrite("AttachmentPointName", &UPopulationFactoryWillowProjectile::AttachmentPointName)
        .def_readwrite("SpawnDirection", &UPopulationFactoryWillowProjectile::SpawnDirection)
        .def_readwrite("ProjectileDefinition", &UPopulationFactoryWillowProjectile::ProjectileDefinition)
        .def_readwrite("RelativeLocation", &UPopulationFactoryWillowProjectile::RelativeLocation)
        .def_readwrite("DirectionConeSize", &UPopulationFactoryWillowProjectile::DirectionConeSize)
        .def("StaticClass", &UPopulationFactoryWillowProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowProjectile::eventGetDescriptionOfFactoryOutput)
        .def("CreateProjectile", &UPopulationFactoryWillowProjectile::CreateProjectile, return_value_policy< reference_existing_object >())
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowProjectile::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowProjectile::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("GetActorAllegiance", &UPopulationFactoryWillowProjectile::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}