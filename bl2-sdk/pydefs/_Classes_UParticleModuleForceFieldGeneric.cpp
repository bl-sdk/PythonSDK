#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldGeneric()
{
    class_< UParticleModuleForceFieldGeneric, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleForceFieldGeneric", no_init)
        .def_readwrite("ForceField", &UParticleModuleForceFieldBase::ForceField)
        .def("StaticClass", &UParticleModuleForceFieldGeneric::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetForceFieldInstance", &UParticleModuleForceFieldBase::eventGetForceFieldInstance, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}