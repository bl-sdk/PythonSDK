#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetimeBase()
{
    class_< UParticleModuleLifetimeBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleLifetimeBase", no_init)
        .def("StaticClass", &UParticleModuleLifetimeBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}