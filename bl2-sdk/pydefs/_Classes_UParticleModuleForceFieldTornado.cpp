#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldTornado()
{
    class_< UParticleModuleForceFieldTornado, bases< UParticleModuleForceFieldBase >  , boost::noncopyable>("UParticleModuleForceFieldTornado", no_init)
        .def("StaticClass", &UParticleModuleForceFieldTornado::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}