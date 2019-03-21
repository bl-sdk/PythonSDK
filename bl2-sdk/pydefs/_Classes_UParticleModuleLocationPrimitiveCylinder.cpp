#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveCylinder()
{
    py::class_< UParticleModuleLocationPrimitiveCylinder,  UParticleModuleLocationPrimitiveBase   >("UParticleModuleLocationPrimitiveCylinder")
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveCylinder::StartRadius)
        .def_readwrite("StartHeight", &UParticleModuleLocationPrimitiveCylinder::StartHeight)
        .def_readwrite("HeightAxis", &UParticleModuleLocationPrimitiveCylinder::HeightAxis)
        .def("StaticClass", &UParticleModuleLocationPrimitiveCylinder::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}