#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawnBase(py::module &m)
{
    py::class_< UParticleModuleSpawnBase,  UParticleModule   >(m, "UParticleModuleSpawnBase")
        .def("StaticClass", &UParticleModuleSpawnBase::StaticClass, py::return_value_policy::reference)
          ;
}