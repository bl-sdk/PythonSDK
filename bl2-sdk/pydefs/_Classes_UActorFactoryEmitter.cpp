#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryEmitter(py::module &m)
{
    py::class_< UActorFactoryEmitter,  UActorFactory   >(m, "UActorFactoryEmitter")
        .def_readwrite("ParticleSystem", &UActorFactoryEmitter::ParticleSystem)
          ;
}