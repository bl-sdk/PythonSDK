#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataTrail(py::object m)
{
    py::class_< UParticleModuleTypeDataTrail,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataTrail")
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataTrail::TessellationFactor)
        .def_readwrite("Tension", &UParticleModuleTypeDataTrail::Tension)
        .def_readwrite("SpawnDistance", &UParticleModuleTypeDataTrail::SpawnDistance)
        .def("StaticClass", &UParticleModuleTypeDataTrail::StaticClass, py::return_value_policy::reference)
          ;
}