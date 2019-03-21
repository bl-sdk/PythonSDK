#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberBase()
{
    py::class_< UParticleModuleUberBase,  UParticleModule   >("UParticleModuleUberBase")
        .def_readwrite("RequiredModules", &UParticleModuleUberBase::RequiredModules)
        .def("StaticClass", &UParticleModuleUberBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}