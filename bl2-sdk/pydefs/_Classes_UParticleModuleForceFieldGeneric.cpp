#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldGeneric(py::module &m)
{
    py::class_< UParticleModuleForceFieldGeneric,  UParticleModule   >(m, "UParticleModuleForceFieldGeneric")
        .def_readwrite("ForceField", &UParticleModuleForceFieldBase::ForceField)
        .def("StaticClass", &UParticleModuleForceFieldGeneric::StaticClass, py::return_value_policy::reference)
        .def("eventGetForceFieldInstance", &UParticleModuleForceFieldBase::eventGetForceFieldInstance, py::return_value_policy::reference)
          ;
}