#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation(py::module &m)
{
    py::class_< UParticleModuleLocation,  UParticleModule   >(m, "UParticleModuleLocation")
		.def_static("StaticClass", &UParticleModuleLocation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StartLocation", &UParticleModuleLocation::StartLocation)
          ;
}