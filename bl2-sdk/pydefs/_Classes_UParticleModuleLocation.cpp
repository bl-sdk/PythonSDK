#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation(py::module &m)
{
    py::class_< UParticleModuleLocation,  UParticleModule   >(m, "UParticleModuleLocation")
        .def_readwrite("StartLocation", &UParticleModuleLocation::StartLocation)
          ;
}