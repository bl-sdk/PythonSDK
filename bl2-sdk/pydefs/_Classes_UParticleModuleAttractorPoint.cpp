#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorPoint()
{
    py::class_< UParticleModuleAttractorPoint,  UParticleModuleAttractorBase   >("UParticleModuleAttractorPoint")
        .def_readwrite("Position", &UParticleModuleAttractorPoint::Position)
        .def_readwrite("Range", &UParticleModuleAttractorPoint::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorPoint::Strength)
        .def("StaticClass", &UParticleModuleAttractorPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}