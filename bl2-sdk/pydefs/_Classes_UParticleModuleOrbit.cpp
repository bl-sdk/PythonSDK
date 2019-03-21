#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbit()
{
    class_< UParticleModuleOrbit, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleOrbit", no_init)
        .def_readwrite("ChainMode", &UParticleModuleOrbit::ChainMode)
        .def_readwrite("OffsetAmount", &UParticleModuleOrbit::OffsetAmount)
        .def_readwrite("OffsetOptions", &UParticleModuleOrbit::OffsetOptions)
        .def_readwrite("RotationAmount", &UParticleModuleOrbit::RotationAmount)
        .def_readwrite("RotationOptions", &UParticleModuleOrbit::RotationOptions)
        .def_readwrite("RotationRateAmount", &UParticleModuleOrbit::RotationRateAmount)
        .def_readwrite("RotationRateOptions", &UParticleModuleOrbit::RotationRateOptions)
        .def("StaticClass", &UParticleModuleOrbit::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}