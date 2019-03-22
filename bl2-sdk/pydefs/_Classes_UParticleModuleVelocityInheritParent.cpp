#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityInheritParent(py::module &m)
{
    py::class_< UParticleModuleVelocityInheritParent,  UParticleModuleVelocityBase   >(m, "UParticleModuleVelocityInheritParent")
        .def_readwrite("Scale", &UParticleModuleVelocityInheritParent::Scale)
        .def("StaticClass", &UParticleModuleVelocityInheritParent::StaticClass, py::return_value_policy::reference)
          ;
}