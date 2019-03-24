#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGenerator(py::module &m)
{
    py::class_< UParticleModuleEventGenerator,  UParticleModule   >(m, "UParticleModuleEventGenerator")
		.def_static("StaticClass", &UParticleModuleEventGenerator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Events", &UParticleModuleEventGenerator::Events)
          ;
}