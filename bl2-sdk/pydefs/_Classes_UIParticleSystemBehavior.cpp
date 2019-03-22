#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIParticleSystemBehavior(py::module &m)
{
    py::class_< UIParticleSystemBehavior,  UInterface   >(m, "UIParticleSystemBehavior")
        .def("Behavior_ChangeParticleSystemActiveState", &UIParticleSystemBehavior::Behavior_ChangeParticleSystemActiveState)
          ;
}