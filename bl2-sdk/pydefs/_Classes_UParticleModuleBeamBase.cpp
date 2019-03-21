#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamBase()
{
    class_< UParticleModuleBeamBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleBeamBase", no_init)
        .def("StaticClass", &UParticleModuleBeamBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}