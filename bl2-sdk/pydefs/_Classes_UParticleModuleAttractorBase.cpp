#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorBase()
{
    py::class_< UParticleModuleAttractorBase,  UParticleModule   >("UParticleModuleAttractorBase")
        .def("StaticClass", &UParticleModuleAttractorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}