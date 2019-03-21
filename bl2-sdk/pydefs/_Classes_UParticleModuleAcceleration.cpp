#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAcceleration(py::object m)
{
    py::class_< UParticleModuleAcceleration,  UParticleModule   >(m, "UParticleModuleAcceleration")
        .def_readwrite("Acceleration", &UParticleModuleAcceleration::Acceleration)
        .def("StaticClass", &UParticleModuleAcceleration::StaticClass, py::return_value_policy::reference)
          ;
}