#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataPhysX(py::object m)
{
    py::class_< UParticleModuleTypeDataPhysX,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataPhysX")
        .def_readwrite("PhysXParSys", &UParticleModuleTypeDataPhysX::PhysXParSys)
        .def_readwrite("VerticalLod", &UParticleModuleTypeDataPhysX::VerticalLod)
        .def_readwrite("SPHSmoothScreenRadius", &UParticleModuleTypeDataPhysX::SPHSmoothScreenRadius)
        .def_readwrite("SPHSmoothDepthRadius", &UParticleModuleTypeDataPhysX::SPHSmoothDepthRadius)
        .def_readwrite("SPHCutoffThickness", &UParticleModuleTypeDataPhysX::SPHCutoffThickness)
        .def("StaticClass", &UParticleModuleTypeDataPhysX::StaticClass, py::return_value_policy::reference)
          ;
}