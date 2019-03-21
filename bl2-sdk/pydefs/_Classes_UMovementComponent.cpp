#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMovementComponent()
{
    py::class_< UMovementComponent,  UActorComponent   >("UMovementComponent")
        .def("StaticClass", &UMovementComponent::StaticClass, py::return_value_policy::reference)
        .def("Init", &UMovementComponent::Init)
        .staticmethod("StaticClass")
  ;
}