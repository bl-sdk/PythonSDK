#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActor()
{
    py::class_< AFluidSurfaceActor,  AActor   >("AFluidSurfaceActor")
        .def_readwrite("FluidComponent", &AFluidSurfaceActor::FluidComponent)
        .def_readwrite("ProjectileEntryEffect", &AFluidSurfaceActor::ProjectileEntryEffect)
        .def("StaticClass", &AFluidSurfaceActor::StaticClass, py::return_value_policy::reference)
        .def("eventTouch", &AFluidSurfaceActor::eventTouch)
        .def("eventTakeDamage", &AFluidSurfaceActor::eventTakeDamage)
        .staticmethod("StaticClass")
  ;
}