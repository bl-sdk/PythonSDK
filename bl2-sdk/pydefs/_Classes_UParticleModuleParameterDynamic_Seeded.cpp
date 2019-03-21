#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterDynamic_Seeded()
{
    py::class_< UParticleModuleParameterDynamic_Seeded,  UParticleModule   >("UParticleModuleParameterDynamic_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleParameterDynamic_Seeded::RandomSeedInfo)
        .def_readwrite("DynamicParams", &UParticleModuleParameterDynamic::DynamicParams)
        .def_readwrite("UpdateFlags", &UParticleModuleParameterDynamic::UpdateFlags)
        .def("StaticClass", &UParticleModuleParameterDynamic_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}