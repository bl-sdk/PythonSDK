#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationBase()
{
    class_< UParticleModuleAccelerationBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleAccelerationBase", no_init)
        .def("StaticClass", &UParticleModuleAccelerationBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}