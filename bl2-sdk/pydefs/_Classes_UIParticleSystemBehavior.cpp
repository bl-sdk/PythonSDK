#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIParticleSystemBehavior(py::object m)
{
    py::class_< UIParticleSystemBehavior,  UInterface   >(m, "UIParticleSystemBehavior")
        .def("StaticClass", &UIParticleSystemBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeParticleSystemActiveState", &UIParticleSystemBehavior::Behavior_ChangeParticleSystemActiveState)
          ;
}