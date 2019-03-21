#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColor_Seeded(py::object m)
{
    py::class_< UParticleModuleColor_Seeded,  UParticleModuleColor   >(m, "UParticleModuleColor_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleColor_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleColor_Seeded::StaticClass, py::return_value_policy::reference)
          ;
}