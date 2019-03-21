#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGenerator(py::object m)
{
    py::class_< UParticleModuleEventGenerator,  UParticleModule   >(m, "UParticleModuleEventGenerator")
        .def_readwrite("Events", &UParticleModuleEventGenerator::Events)
        .def("StaticClass", &UParticleModuleEventGenerator::StaticClass, py::return_value_policy::reference)
          ;
}