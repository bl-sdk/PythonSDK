#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PhaseLockHold()
{
    py::class_< UBehavior_PhaseLockHold,  UBehaviorBase   >("UBehavior_PhaseLockHold")
        .def_readwrite("Reason", &UBehavior_PhaseLockHold::Reason)
        .def_readwrite("Action", &UBehavior_PhaseLockHold::Action)
        .def("StaticClass", &UBehavior_PhaseLockHold::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PhaseLockHold::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}