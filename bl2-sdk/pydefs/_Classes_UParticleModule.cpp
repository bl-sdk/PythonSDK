#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModule()
{
    py::class_< UParticleModule,  UObject   >("UParticleModule")
        .def_readwrite("LODValidity", &UParticleModule::LODValidity)
        .def("StaticClass", &UParticleModule::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}