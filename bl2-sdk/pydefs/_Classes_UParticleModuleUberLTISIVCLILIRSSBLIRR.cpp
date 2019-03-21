#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCLILIRSSBLIRR()
{
    class_< UParticleModuleUberLTISIVCLILIRSSBLIRR, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberLTISIVCLILIRSSBLIRR", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberLTISIVCLILIRSSBLIRR::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartSize)
        .def_readwrite("StartVelocity", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartVelocityRadial)
        .def_readwrite("ColorOverLife", &UParticleModuleUberLTISIVCLILIRSSBLIRR::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberLTISIVCLILIRSSBLIRR::AlphaOverLife)
        .def_readwrite("StartLocation", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartLocation)
        .def_readwrite("StartRotation", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartRotation)
        .def_readwrite("SizeLifeMultiplier", &UParticleModuleUberLTISIVCLILIRSSBLIRR::SizeLifeMultiplier)
        .def_readwrite("StartRotationRate", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StartRotationRate)
        .def("StaticClass", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}