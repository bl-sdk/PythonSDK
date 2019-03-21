#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSystemReplay(py::object m)
{
    py::class_< UParticleSystemReplay,  UObject   >(m, "UParticleSystemReplay")
        .def_readwrite("ClipIDNumber", &UParticleSystemReplay::ClipIDNumber)
        .def_readwrite("Frames", &UParticleSystemReplay::Frames)
        .def("StaticClass", &UParticleSystemReplay::StaticClass, py::return_value_policy::reference)
          ;
}