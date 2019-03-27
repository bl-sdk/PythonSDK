#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysEffectInfo(py::module &m)
{
    py::class_< FPhysEffectInfo >(m, "FPhysEffectInfo")
        .def_readwrite("Threshold", &FPhysEffectInfo::Threshold)
        .def_readwrite("ReFireDelay", &FPhysEffectInfo::ReFireDelay)
        .def_readwrite("Effect", &FPhysEffectInfo::Effect)
        .def_readwrite("Sound", &FPhysEffectInfo::Sound)
        .def_readwrite("ImpactDefinition", &FPhysEffectInfo::ImpactDefinition)
  ;
}