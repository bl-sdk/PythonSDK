#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGenerator(py::module &m)
{
    py::class_< UParticleModuleEventGenerator,  UParticleModule   >(m, "UParticleModuleEventGenerator")
        .def_readwrite("Events", &UParticleModuleEventGenerator::Events)
          ;
}