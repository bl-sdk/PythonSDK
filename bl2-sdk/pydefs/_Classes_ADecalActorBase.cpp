#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActorBase(py::object m)
{
    py::class_< ADecalActorBase,  AActor   >(m, "ADecalActorBase")
        .def_readwrite("Decal", &ADecalActorBase::Decal)
        .def("StaticClass", &ADecalActorBase::StaticClass, py::return_value_policy::reference)
          ;
}