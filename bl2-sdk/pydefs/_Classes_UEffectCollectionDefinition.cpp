#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEffectCollectionDefinition(py::object m)
{
    py::class_< UEffectCollectionDefinition,  UGBXDefinition   >(m, "UEffectCollectionDefinition")
        .def_readwrite("ParticleEffects", &UEffectCollectionDefinition::ParticleEffects)
        .def("StaticClass", &UEffectCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetParticleEffect", &UEffectCollectionDefinition::GetParticleEffect, py::return_value_policy::reference)
          ;
}