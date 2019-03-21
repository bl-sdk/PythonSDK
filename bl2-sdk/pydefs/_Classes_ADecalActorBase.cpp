#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActorBase()
{
    py::class_< ADecalActorBase,  AActor   >("ADecalActorBase")
        .def_readwrite("Decal", &ADecalActorBase::Decal)
        .def("StaticClass", &ADecalActorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}