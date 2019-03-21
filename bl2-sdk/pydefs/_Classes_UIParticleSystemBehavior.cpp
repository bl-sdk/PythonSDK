#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIParticleSystemBehavior()
{
    py::class_< UIParticleSystemBehavior,  UInterface   >("UIParticleSystemBehavior")
        .def("StaticClass", &UIParticleSystemBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeParticleSystemActiveState", &UIParticleSystemBehavior::Behavior_ChangeParticleSystemActiveState)
        .staticmethod("StaticClass")
  ;
}