#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldCylindrical()
{
    class_< UParticleModuleForceFieldCylindrical, bases< UParticleModuleForceFieldBase >  , boost::noncopyable>("UParticleModuleForceFieldCylindrical", no_init)
        .def("StaticClass", &UParticleModuleForceFieldCylindrical::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}