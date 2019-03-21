#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActor()
{
    class_< AFluidSurfaceActor, bases< AActor >  , boost::noncopyable>("AFluidSurfaceActor", no_init)
        .def_readwrite("FluidComponent", &AFluidSurfaceActor::FluidComponent)
        .def_readwrite("ProjectileEntryEffect", &AFluidSurfaceActor::ProjectileEntryEffect)
        .def("StaticClass", &AFluidSurfaceActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTouch", &AFluidSurfaceActor::eventTouch)
        .def("eventTakeDamage", &AFluidSurfaceActor::eventTakeDamage)
        .staticmethod("StaticClass")
  ;
}