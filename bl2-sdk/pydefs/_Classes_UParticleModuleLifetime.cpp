#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime()
{
    class_< UParticleModuleLifetime, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleLifetime", no_init)
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
        .def("StaticClass", &UParticleModuleLifetime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}