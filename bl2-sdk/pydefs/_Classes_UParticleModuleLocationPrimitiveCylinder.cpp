#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveCylinder()
{
    class_< UParticleModuleLocationPrimitiveCylinder, bases< UParticleModuleLocationPrimitiveBase >  , boost::noncopyable>("UParticleModuleLocationPrimitiveCylinder", no_init)
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveCylinder::StartRadius)
        .def_readwrite("StartHeight", &UParticleModuleLocationPrimitiveCylinder::StartHeight)
        .def_readwrite("HeightAxis", &UParticleModuleLocationPrimitiveCylinder::HeightAxis)
        .def("StaticClass", &UParticleModuleLocationPrimitiveCylinder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}