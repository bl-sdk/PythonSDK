#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActorMovable()
{
    py::class_< ADecalActorMovable,  AActor   >("ADecalActorMovable")
        .def_readwrite("Decal", &ADecalActorBase::Decal)
        .def("StaticClass", &ADecalActorMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}