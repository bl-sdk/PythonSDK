#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMovementComponent(py::object m)
{
    py::class_< UMovementComponent,  UActorComponent   >(m, "UMovementComponent")
        .def("StaticClass", &UMovementComponent::StaticClass, py::return_value_policy::reference)
        .def("Init", &UMovementComponent::Init)
          ;
}