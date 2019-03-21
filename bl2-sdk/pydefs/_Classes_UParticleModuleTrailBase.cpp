#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailBase()
{
    py::class_< UParticleModuleTrailBase,  UParticleModule   >("UParticleModuleTrailBase")
        .def("StaticClass", &UParticleModuleTrailBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}