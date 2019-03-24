#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCLILIRSSBLIRR(py::module &m)
{
    py::class_< UParticleModuleUberLTISIVCLILIRSSBLIRR,  UParticleModuleUberBase   >(m, "UParticleModuleUberLTISIVCLILIRSSBLIRR")
		.def_static("StaticClass", &UParticleModuleUberLTISIVCLILIRSSBLIRR::StaticClass, py::return_value_policy::reference)
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
          ;
}