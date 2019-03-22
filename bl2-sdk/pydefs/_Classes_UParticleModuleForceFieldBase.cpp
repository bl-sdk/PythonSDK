#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldBase(py::module &m)
{
    py::class_< UParticleModuleForceFieldBase,  UParticleModule   >(m, "UParticleModuleForceFieldBase")
        .def_readwrite("ForceField", &UParticleModuleForceFieldBase::ForceField)
        .def("eventGetForceFieldInstance", &UParticleModuleForceFieldBase::eventGetForceFieldInstance, py::return_value_policy::reference)
          ;
}