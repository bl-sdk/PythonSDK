#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorParticle(py::object m)
{
    py::class_< UParticleModuleAttractorParticle,  UParticleModule   >(m, "UParticleModuleAttractorParticle")
        .def_readwrite("EmitterName", &UParticleModuleAttractorParticle::EmitterName)
        .def_readwrite("Range", &UParticleModuleAttractorParticle::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorParticle::Strength)
        .def_readwrite("SelectionMethod", &UParticleModuleAttractorParticle::SelectionMethod)
        .def_readwrite("LastSelIndex", &UParticleModuleAttractorParticle::LastSelIndex)
        .def("StaticClass", &UParticleModuleAttractorParticle::StaticClass, py::return_value_policy::reference)
          ;
}