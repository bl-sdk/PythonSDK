#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityInheritParent(py::module &m)
{
    py::class_< UParticleModuleVelocityInheritParent,  UParticleModuleVelocityBase   >(m, "UParticleModuleVelocityInheritParent")
		.def_static("StaticClass", &UParticleModuleVelocityInheritParent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Scale", &UParticleModuleVelocityInheritParent::Scale)
          ;
}