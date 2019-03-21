#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldBase()
{
    py::class_< UParticleModuleForceFieldBase,  UParticleModule   >("UParticleModuleForceFieldBase")
        .def_readwrite("ForceField", &UParticleModuleForceFieldBase::ForceField)
        .def("StaticClass", &UParticleModuleForceFieldBase::StaticClass, py::return_value_policy::reference)
        .def("eventGetForceFieldInstance", &UParticleModuleForceFieldBase::eventGetForceFieldInstance, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}