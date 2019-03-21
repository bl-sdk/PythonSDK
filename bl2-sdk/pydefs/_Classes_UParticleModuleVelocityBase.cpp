#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityBase()
{
    class_< UParticleModuleVelocityBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleVelocityBase", no_init)
        .def("StaticClass", &UParticleModuleVelocityBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}