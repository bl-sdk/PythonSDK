#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationBase()
{
    class_< UParticleModuleOrientationBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleOrientationBase", no_init)
        .def("StaticClass", &UParticleModuleOrientationBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}