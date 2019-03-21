#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPursuitBehavior()
{
    py::class_< UIPursuitBehavior,  UInterface   >("UIPursuitBehavior")
        .def("StaticClass", &UIPursuitBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_SetPreferredNodeType", &UIPursuitBehavior::Behavior_SetPreferredNodeType)
        .staticmethod("StaticClass")
  ;
}