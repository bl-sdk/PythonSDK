#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChangeBehaviorSetStateBehavior()
{
    py::class_< UIChangeBehaviorSetStateBehavior,  UInterface   >("UIChangeBehaviorSetStateBehavior")
        .def("StaticClass", &UIChangeBehaviorSetStateBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeBehaviorSet", &UIChangeBehaviorSetStateBehavior::Behavior_ChangeBehaviorSet)
        .staticmethod("StaticClass")
  ;
}