#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAcceleration()
{
    class_< UParticleModuleAcceleration, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleAcceleration", no_init)
        .def_readwrite("Acceleration", &UParticleModuleAcceleration::Acceleration)
        .def("StaticClass", &UParticleModuleAcceleration::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}