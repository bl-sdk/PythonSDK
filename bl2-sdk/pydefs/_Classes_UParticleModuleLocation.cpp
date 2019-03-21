#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation()
{
    py::class_< UParticleModuleLocation,  UParticleModule   >("UParticleModuleLocation")
        .def_readwrite("StartLocation", &UParticleModuleLocation::StartLocation)
        .def("StaticClass", &UParticleModuleLocation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}