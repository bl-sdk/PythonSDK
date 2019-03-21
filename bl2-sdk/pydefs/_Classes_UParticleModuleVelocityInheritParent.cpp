#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityInheritParent()
{
    py::class_< UParticleModuleVelocityInheritParent,  UParticleModuleVelocityBase   >("UParticleModuleVelocityInheritParent")
        .def_readwrite("Scale", &UParticleModuleVelocityInheritParent::Scale)
        .def("StaticClass", &UParticleModuleVelocityInheritParent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}