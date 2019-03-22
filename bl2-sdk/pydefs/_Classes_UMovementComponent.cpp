#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMovementComponent(py::module &m)
{
    py::class_< UMovementComponent,  UActorComponent   >(m, "UMovementComponent")
        .def("Init", &UMovementComponent::Init)
          ;
}