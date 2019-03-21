#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataTrail()
{
    class_< UParticleModuleTypeDataTrail, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataTrail", no_init)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataTrail::TessellationFactor)
        .def_readwrite("Tension", &UParticleModuleTypeDataTrail::Tension)
        .def_readwrite("SpawnDistance", &UParticleModuleTypeDataTrail::SpawnDistance)
        .def("StaticClass", &UParticleModuleTypeDataTrail::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}