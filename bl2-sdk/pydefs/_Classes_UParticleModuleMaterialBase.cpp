#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialBase()
{
    py::class_< UParticleModuleMaterialBase,  UParticleModule   >("UParticleModuleMaterialBase")
        .def("StaticClass", &UParticleModuleMaterialBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}