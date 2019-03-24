#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAcceleration(py::module &m)
{
    py::class_< UParticleModuleAcceleration,  UParticleModule   >(m, "UParticleModuleAcceleration")
		.def_static("StaticClass", &UParticleModuleAcceleration::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Acceleration", &UParticleModuleAcceleration::Acceleration)
          ;
}