#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_ConstraintDrawComponent()
{
    py::class_< URB_ConstraintDrawComponent,  UPrimitiveComponent   >("URB_ConstraintDrawComponent")
        .def_readwrite("LimitMaterial", &URB_ConstraintDrawComponent::LimitMaterial)
        .def("StaticClass", &URB_ConstraintDrawComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}