#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEffectCollectionDefinition()
{
    py::class_< UEffectCollectionDefinition,  UGBXDefinition   >("UEffectCollectionDefinition")
        .def_readwrite("ParticleEffects", &UEffectCollectionDefinition::ParticleEffects)
        .def("StaticClass", &UEffectCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetParticleEffect", &UEffectCollectionDefinition::GetParticleEffect, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}