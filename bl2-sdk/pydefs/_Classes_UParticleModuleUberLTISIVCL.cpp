#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCL()
{
    class_< UParticleModuleUberLTISIVCL, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberLTISIVCL", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberLTISIVCL::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberLTISIVCL::StartSize)
        .def_readwrite("StartVelocity", &UParticleModuleUberLTISIVCL::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleUberLTISIVCL::StartVelocityRadial)
        .def_readwrite("ColorOverLife", &UParticleModuleUberLTISIVCL::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberLTISIVCL::AlphaOverLife)
        .def("StaticClass", &UParticleModuleUberLTISIVCL::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}