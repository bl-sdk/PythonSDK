#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGenerator()
{
    py::class_< UParticleModuleEventGenerator,  UParticleModule   >("UParticleModuleEventGenerator")
        .def_readwrite("Events", &UParticleModuleEventGenerator::Events)
        .def("StaticClass", &UParticleModuleEventGenerator::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}