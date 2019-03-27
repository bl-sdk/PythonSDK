#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActorBase(py::module &m)
{
    py::class_< ADecalActorBase,  AActor   >(m, "ADecalActorBase")
		.def_static("StaticClass", &ADecalActorBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Decal", &ADecalActorBase::Decal)
          ;
}