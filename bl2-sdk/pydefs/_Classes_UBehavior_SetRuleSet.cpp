#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetRuleSet(py::module &m)
{
    py::class_< UBehavior_SetRuleSet,  UBehaviorBase   >(m, "UBehavior_SetRuleSet")
		.def_static("StaticClass", &UBehavior_SetRuleSet::StaticClass, py::return_value_policy::reference)
          ;
}