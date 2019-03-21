#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventBase()
{
    py::class_< UParticleModuleEventBase,  UParticleModule   >("UParticleModuleEventBase")
        .def("StaticClass", &UParticleModuleEventBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}