#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBase()
{
    class_< UParticleModuleKillBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleKillBase", no_init)
        .def("StaticClass", &UParticleModuleKillBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}