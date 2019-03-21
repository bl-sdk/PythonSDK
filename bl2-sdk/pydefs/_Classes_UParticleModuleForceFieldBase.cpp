#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldBase()
{
    class_< UParticleModuleForceFieldBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleForceFieldBase", no_init)
        .def_readwrite("ForceField", &UParticleModuleForceFieldBase::ForceField)
        .def("StaticClass", &UParticleModuleForceFieldBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetForceFieldInstance", &UParticleModuleForceFieldBase::eventGetForceFieldInstance, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}