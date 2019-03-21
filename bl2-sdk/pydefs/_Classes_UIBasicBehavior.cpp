#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBasicBehavior()
{
    py::class_< UIBasicBehavior,  UInterface   >("UIBasicBehavior")
        .def("StaticClass", &UIBasicBehavior::StaticClass, py::return_value_policy::reference)
        .def("EvaluateAttributeInitialization", &UIBasicBehavior::EvaluateAttributeInitialization)
        .def("FindAnimNode", &UIBasicBehavior::FindAnimNode, py::return_value_policy::reference)
        .def("SetRotationRate", &UIBasicBehavior::SetRotationRate)
        .def("GetCollisionRadius", &UIBasicBehavior::GetCollisionRadius)
        .staticmethod("StaticClass")
  ;
}