#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetLookAtSpeed(py::module &m)
{
    py::class_< UBehavior_SetLookAtSpeed,  UBehaviorBase   >(m, "UBehavior_SetLookAtSpeed")
        .def_readwrite("Action", &UBehavior_SetLookAtSpeed::Action)
        .def_readwrite("OverrideSpeed", &UBehavior_SetLookAtSpeed::OverrideSpeed)
        .def("StaticClass", &UBehavior_SetLookAtSpeed::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetLookAtSpeed::ApplyBehaviorToContext)
          ;
}