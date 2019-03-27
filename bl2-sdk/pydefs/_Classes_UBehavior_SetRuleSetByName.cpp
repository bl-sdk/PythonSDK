#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetRuleSetByName(py::module &m)
{
    py::class_< UBehavior_SetRuleSetByName,  UBehaviorBase   >(m, "UBehavior_SetRuleSetByName")
		.def_static("StaticClass", &UBehavior_SetRuleSetByName::StaticClass, py::return_value_policy::reference)
          ;
}