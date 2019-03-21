#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBase()
{
    class_< UParticleModuleLocationBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleLocationBase", no_init)
        .def("StaticClass", &UParticleModuleLocationBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}