#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate()
{
    class_< UParticleModuleMeshRotationRate, bases< UParticleModuleRotationRateBase >  , boost::noncopyable>("UParticleModuleMeshRotationRate", no_init)
        .def_readwrite("StartRotationRate", &UParticleModuleMeshRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleMeshRotationRate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}