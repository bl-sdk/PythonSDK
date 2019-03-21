#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActorMovable()
{
    py::class_< AFluidSurfaceActorMovable,  AFluidSurfaceActor   >("AFluidSurfaceActorMovable")
        .def("StaticClass", &AFluidSurfaceActorMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}