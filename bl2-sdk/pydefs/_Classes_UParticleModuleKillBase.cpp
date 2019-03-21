#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBase(py::object m)
{
    py::class_< UParticleModuleKillBase,  UParticleModule   >(m, "UParticleModuleKillBase")
        .def("StaticClass", &UParticleModuleKillBase::StaticClass, py::return_value_policy::reference)
          ;
}