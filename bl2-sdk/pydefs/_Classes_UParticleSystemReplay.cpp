#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSystemReplay(py::module &m)
{
    py::class_< UParticleSystemReplay,  UObject   >(m, "UParticleSystemReplay")
		.def_static("StaticClass", &UParticleSystemReplay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClipIDNumber", &UParticleSystemReplay::ClipIDNumber)
        .def_readwrite("Frames", &UParticleSystemReplay::Frames)
          ;
}