#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbitBase()
{
    class_< UParticleModuleOrbitBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleOrbitBase", no_init)
        .def("StaticClass", &UParticleModuleOrbitBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}