#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPursuitBehavior(py::object m)
{
    py::class_< UIPursuitBehavior,  UInterface   >(m, "UIPursuitBehavior")
        .def("StaticClass", &UIPursuitBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_SetPreferredNodeType", &UIPursuitBehavior::Behavior_SetPreferredNodeType)
          ;
}