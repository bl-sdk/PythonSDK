#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModule(py::module &m)
{
    py::class_< UParticleModule,  UObject   >(m, "UParticleModule")
        .def_readwrite("LODValidity", &UParticleModule::LODValidity)
          ;
}