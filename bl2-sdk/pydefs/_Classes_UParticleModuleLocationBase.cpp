#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBase(py::object m)
{
    py::class_< UParticleModuleLocationBase,  UParticleModule   >(m, "UParticleModuleLocationBase")
        .def("StaticClass", &UParticleModuleLocationBase::StaticClass, py::return_value_policy::reference)
          ;
}