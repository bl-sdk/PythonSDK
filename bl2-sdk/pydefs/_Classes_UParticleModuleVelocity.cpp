#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity(py::object m)
{
    py::class_< UParticleModuleVelocity,  UParticleModuleVelocityBase   >(m, "UParticleModuleVelocity")
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
        .def("StaticClass", &UParticleModuleVelocity::StaticClass, py::return_value_policy::reference)
          ;
}