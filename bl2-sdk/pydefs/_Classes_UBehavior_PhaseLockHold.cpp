#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PhaseLockHold(py::module &m)
{
    py::class_< UBehavior_PhaseLockHold,  UBehaviorBase   >(m, "UBehavior_PhaseLockHold")
		.def_static("StaticClass", &UBehavior_PhaseLockHold::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Reason", &UBehavior_PhaseLockHold::Reason)
        .def_readwrite("Action", &UBehavior_PhaseLockHold::Action)
        .def("ApplyBehaviorToContext", &UBehavior_PhaseLockHold::ApplyBehaviorToContext)
          ;
}