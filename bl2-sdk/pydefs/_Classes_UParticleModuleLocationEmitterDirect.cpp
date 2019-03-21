#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationEmitterDirect()
{
    class_< UParticleModuleLocationEmitterDirect, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationEmitterDirect", no_init)
        .def_readwrite("EmitterName", &UParticleModuleLocationEmitterDirect::EmitterName)
        .def("StaticClass", &UParticleModuleLocationEmitterDirect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}