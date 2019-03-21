#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity()
{
    class_< UParticleModuleVelocity, bases< UParticleModuleVelocityBase >  , boost::noncopyable>("UParticleModuleVelocity", no_init)
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
        .def("StaticClass", &UParticleModuleVelocity::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}