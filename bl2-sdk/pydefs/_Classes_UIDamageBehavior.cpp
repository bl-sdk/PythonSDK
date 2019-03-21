#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageBehavior(py::object m)
{
    py::class_< UIDamageBehavior,  UInterface   >(m, "UIDamageBehavior")
        .def("StaticClass", &UIDamageBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_CauseRadiusDamage", &UIDamageBehavior::Behavior_CauseRadiusDamage)
        .def("Behavior_CauseDamage", &UIDamageBehavior::Behavior_CauseDamage)
          ;
}