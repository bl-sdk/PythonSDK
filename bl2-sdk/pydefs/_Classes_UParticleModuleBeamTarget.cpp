#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamTarget()
{
    py::class_< UParticleModuleBeamTarget,  UParticleModuleBeamBase   >("UParticleModuleBeamTarget")
        .def_readwrite("TargetMethod", &UParticleModuleBeamTarget::TargetMethod)
        .def_readwrite("TargetTangentMethod", &UParticleModuleBeamTarget::TargetTangentMethod)
        .def_readwrite("TargetName", &UParticleModuleBeamTarget::TargetName)
        .def_readwrite("Target", &UParticleModuleBeamTarget::Target)
        .def_readwrite("TargetTangent", &UParticleModuleBeamTarget::TargetTangent)
        .def_readwrite("TargetStrength", &UParticleModuleBeamTarget::TargetStrength)
        .def_readwrite("LockRadius", &UParticleModuleBeamTarget::LockRadius)
        .def("StaticClass", &UParticleModuleBeamTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}