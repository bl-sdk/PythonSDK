#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorPoint(py::module &m)
{
    py::class_< UParticleModuleAttractorPoint,  UParticleModuleAttractorBase   >(m, "UParticleModuleAttractorPoint")
        .def_readwrite("Position", &UParticleModuleAttractorPoint::Position)
        .def_readwrite("Range", &UParticleModuleAttractorPoint::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorPoint::Strength)
          ;
}