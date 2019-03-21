#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillHeight()
{
    py::class_< UParticleModuleKillHeight,  UParticleModule   >("UParticleModuleKillHeight")
        .def_readwrite("Height", &UParticleModuleKillHeight::Height)
        .def("StaticClass", &UParticleModuleKillHeight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}