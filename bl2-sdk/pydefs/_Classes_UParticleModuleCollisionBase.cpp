#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionBase()
{
    class_< UParticleModuleCollisionBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleCollisionBase", no_init)
        .def("StaticClass", &UParticleModuleCollisionBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}