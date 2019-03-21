#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_ConstraintActorSpawnable(py::object m)
{
    py::class_< ARB_ConstraintActorSpawnable,  ARB_ConstraintActor   >(m, "ARB_ConstraintActorSpawnable")
        .def("StaticClass", &ARB_ConstraintActorSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}