#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCLIL(py::object m)
{
    py::class_< UParticleModuleUberLTISIVCLIL,  UParticleModuleUberBase   >(m, "UParticleModuleUberLTISIVCLIL")
        .def_readwrite("Lifetime", &UParticleModuleUberLTISIVCLIL::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberLTISIVCLIL::StartSize)
        .def_readwrite("StartVelocity", &UParticleModuleUberLTISIVCLIL::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleUberLTISIVCLIL::StartVelocityRadial)
        .def_readwrite("ColorOverLife", &UParticleModuleUberLTISIVCLIL::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberLTISIVCLIL::AlphaOverLife)
        .def_readwrite("StartLocation", &UParticleModuleUberLTISIVCLIL::StartLocation)
        .def("StaticClass", &UParticleModuleUberLTISIVCLIL::StaticClass, py::return_value_policy::reference)
          ;
}