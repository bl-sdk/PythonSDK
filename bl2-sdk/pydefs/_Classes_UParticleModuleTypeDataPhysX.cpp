#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataPhysX()
{
    class_< UParticleModuleTypeDataPhysX, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataPhysX", no_init)
        .def_readwrite("PhysXParSys", &UParticleModuleTypeDataPhysX::PhysXParSys)
        .def_readwrite("VerticalLod", &UParticleModuleTypeDataPhysX::VerticalLod)
        .def_readwrite("SPHSmoothScreenRadius", &UParticleModuleTypeDataPhysX::SPHSmoothScreenRadius)
        .def_readwrite("SPHSmoothDepthRadius", &UParticleModuleTypeDataPhysX::SPHSmoothDepthRadius)
        .def_readwrite("SPHCutoffThickness", &UParticleModuleTypeDataPhysX::SPHCutoffThickness)
        .def("StaticClass", &UParticleModuleTypeDataPhysX::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}