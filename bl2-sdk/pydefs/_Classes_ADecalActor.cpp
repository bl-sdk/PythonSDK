#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActor(py::module &m)
{
    py::class_< ADecalActor,  ADecalActorBase   >(m, "ADecalActor")
        .def("StaticClass", &ADecalActor::StaticClass, py::return_value_policy::reference)
          ;
}