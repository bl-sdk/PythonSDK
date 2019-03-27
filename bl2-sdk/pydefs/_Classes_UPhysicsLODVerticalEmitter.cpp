#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsLODVerticalEmitter(py::module &m)
{
    py::class_< UPhysicsLODVerticalEmitter,  UObject   >(m, "UPhysicsLODVerticalEmitter")
		.def_static("StaticClass", &UPhysicsLODVerticalEmitter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParticlePercentage", &UPhysicsLODVerticalEmitter::ParticlePercentage)
          ;
}