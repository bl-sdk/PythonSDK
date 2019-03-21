#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillHeight(py::object m)
{
    py::class_< UParticleModuleKillHeight,  UParticleModule   >(m, "UParticleModuleKillHeight")
        .def_readwrite("Height", &UParticleModuleKillHeight::Height)
        .def("StaticClass", &UParticleModuleKillHeight::StaticClass, py::return_value_policy::reference)
          ;
}