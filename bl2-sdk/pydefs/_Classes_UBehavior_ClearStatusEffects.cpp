#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClearStatusEffects(py::object m)
{
    py::class_< UBehavior_ClearStatusEffects,  UBehaviorBase   >(m, "UBehavior_ClearStatusEffects")
        .def("StaticClass", &UBehavior_ClearStatusEffects::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ClearStatusEffects::ApplyBehaviorToContext)
          ;
}