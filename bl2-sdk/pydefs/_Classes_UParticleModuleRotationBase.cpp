#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationBase()
{
    class_< UParticleModuleRotationBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleRotationBase", no_init)
        .def("StaticClass", &UParticleModuleRotationBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}