#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbitBase(py::object m)
{
    py::class_< UParticleModuleOrbitBase,  UParticleModule   >(m, "UParticleModuleOrbitBase")
        .def("StaticClass", &UParticleModuleOrbitBase::StaticClass, py::return_value_policy::reference)
          ;
}