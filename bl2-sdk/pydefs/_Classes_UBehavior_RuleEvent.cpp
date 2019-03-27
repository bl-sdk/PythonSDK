#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RuleEvent(py::module &m)
{
    py::class_< UBehavior_RuleEvent,  UBehaviorBase   >(m, "UBehavior_RuleEvent")
		.def_static("StaticClass", &UBehavior_RuleEvent::StaticClass, py::return_value_policy::reference)
          ;
}