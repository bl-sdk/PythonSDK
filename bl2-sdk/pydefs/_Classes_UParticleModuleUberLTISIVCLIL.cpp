#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCLIL()
{
    class_< UParticleModuleUberLTISIVCLIL, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberLTISIVCLIL", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberLTISIVCLIL::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberLTISIVCLIL::StartSize)
        .def_readwrite("StartVelocity", &UParticleModuleUberLTISIVCLIL::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleUberLTISIVCLIL::StartVelocityRadial)
        .def_readwrite("ColorOverLife", &UParticleModuleUberLTISIVCLIL::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberLTISIVCLIL::AlphaOverLife)
        .def_readwrite("StartLocation", &UParticleModuleUberLTISIVCLIL::StartLocation)
        .def("StaticClass", &UParticleModuleUberLTISIVCLIL::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}