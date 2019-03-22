#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsLODVerticalEmitter(py::module &m)
{
    py::class_< UPhysicsLODVerticalEmitter,  UObject   >(m, "UPhysicsLODVerticalEmitter")
        .def_readwrite("ParticlePercentage", &UPhysicsLODVerticalEmitter::ParticlePercentage)
          ;
}