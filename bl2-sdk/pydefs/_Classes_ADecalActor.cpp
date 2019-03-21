#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActor()
{
    py::class_< ADecalActor,  ADecalActorBase   >("ADecalActor")
        .def("StaticClass", &ADecalActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}