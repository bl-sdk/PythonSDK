#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveCylinder(py::object m)
{
    py::class_< UParticleModuleLocationPrimitiveCylinder,  UParticleModuleLocationPrimitiveBase   >(m, "UParticleModuleLocationPrimitiveCylinder")
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveCylinder::StartRadius)
        .def_readwrite("StartHeight", &UParticleModuleLocationPrimitiveCylinder::StartHeight)
        .def_readwrite("HeightAxis", &UParticleModuleLocationPrimitiveCylinder::HeightAxis)
        .def("StaticClass", &UParticleModuleLocationPrimitiveCylinder::StaticClass, py::return_value_policy::reference)
          ;
}