#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChangeBehaviorSetStateBehavior(py::module &m)
{
    py::class_< UIChangeBehaviorSetStateBehavior,  UInterface   >(m, "UIChangeBehaviorSetStateBehavior")
        .def("Behavior_ChangeBehaviorSet", &UIChangeBehaviorSetStateBehavior::Behavior_ChangeBehaviorSet)
          ;
}