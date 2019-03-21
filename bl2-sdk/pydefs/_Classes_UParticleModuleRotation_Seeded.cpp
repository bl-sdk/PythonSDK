#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation_Seeded(py::object m)
{
    py::class_< UParticleModuleRotation_Seeded,  UParticleModuleRotation   >(m, "UParticleModuleRotation_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotation_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleRotation_Seeded::StaticClass, py::return_value_policy::reference)
          ;
}