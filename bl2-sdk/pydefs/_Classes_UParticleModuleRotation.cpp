#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation()
{
    class_< UParticleModuleRotation, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleRotation", no_init)
        .def_readwrite("StartRotation", &UParticleModuleRotation::StartRotation)
        .def("StaticClass", &UParticleModuleRotation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}