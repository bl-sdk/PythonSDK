#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailTaper(py::object m)
{
    py::class_< UParticleModuleTrailTaper,  UParticleModule   >(m, "UParticleModuleTrailTaper")
        .def_readwrite("TaperMethod", &UParticleModuleTrailTaper::TaperMethod)
        .def_readwrite("TaperFactor", &UParticleModuleTrailTaper::TaperFactor)
        .def("StaticClass", &UParticleModuleTrailTaper::StaticClass, py::return_value_policy::reference)
          ;
}