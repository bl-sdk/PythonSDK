#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldRadial()
{
    class_< UParticleModuleForceFieldRadial, bases< UParticleModuleForceFieldBase >  , boost::noncopyable>("UParticleModuleForceFieldRadial", no_init)
        .def("StaticClass", &UParticleModuleForceFieldRadial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}