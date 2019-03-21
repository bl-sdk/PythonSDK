#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate()
{
    class_< UParticleModuleRotationRate, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleRotationRate", no_init)
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleRotationRate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}