#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AdvanceObjectiveSet(py::module &m)
{
    py::class_< UBehavior_AdvanceObjectiveSet,  UBehaviorBase   >(m, "UBehavior_AdvanceObjectiveSet")
		.def_static("StaticClass", &UBehavior_AdvanceObjectiveSet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ObjectiveSetToAdvanceTo", &UBehavior_AdvanceObjectiveSet::ObjectiveSetToAdvanceTo)
        .def("ApplyBehaviorToContext", &UBehavior_AdvanceObjectiveSet::ApplyBehaviorToContext)
          ;
}