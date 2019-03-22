#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTimeBase(py::module &m)
{
    py::class_< UParticleModuleStoreSpawnTimeBase,  UParticleModule   >(m, "UParticleModuleStoreSpawnTimeBase")
        .def("StaticClass", &UParticleModuleStoreSpawnTimeBase::StaticClass, py::return_value_policy::reference)
          ;
}