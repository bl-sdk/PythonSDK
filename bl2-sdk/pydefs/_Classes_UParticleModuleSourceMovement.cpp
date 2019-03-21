#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSourceMovement()
{
    class_< UParticleModuleSourceMovement, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleSourceMovement", no_init)
        .def_readwrite("SourceMovementScale", &UParticleModuleSourceMovement::SourceMovementScale)
        .def("StaticClass", &UParticleModuleSourceMovement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}