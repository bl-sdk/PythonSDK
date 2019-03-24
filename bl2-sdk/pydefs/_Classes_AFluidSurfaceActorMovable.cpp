#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActorMovable(py::module &m)
{
    py::class_< AFluidSurfaceActorMovable,  AFluidSurfaceActor   >(m, "AFluidSurfaceActorMovable")
		.def_static("StaticClass", &AFluidSurfaceActorMovable::StaticClass, py::return_value_policy::reference)
          ;
}