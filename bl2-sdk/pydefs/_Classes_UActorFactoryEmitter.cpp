#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryEmitter()
{
    py::class_< UActorFactoryEmitter,  UActorFactory   >("UActorFactoryEmitter")
        .def_readwrite("ParticleSystem", &UActorFactoryEmitter::ParticleSystem)
        .def("StaticClass", &UActorFactoryEmitter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}