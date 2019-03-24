#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColor_Seeded(py::module &m)
{
    py::class_< UParticleModuleColor_Seeded,  UParticleModuleColor   >(m, "UParticleModuleColor_Seeded")
		.def_static("StaticClass", &UParticleModuleColor_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleColor_Seeded::RandomSeedInfo)
          ;
}