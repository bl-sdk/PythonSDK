#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionBase(py::module &m)
{
    py::class_< UParticleModuleCollisionBase,  UParticleModule   >(m, "UParticleModuleCollisionBase")
        .def("StaticClass", &UParticleModuleCollisionBase::StaticClass, py::return_value_policy::reference)
          ;
}