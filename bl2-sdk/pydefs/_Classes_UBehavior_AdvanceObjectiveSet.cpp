#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AdvanceObjectiveSet(py::object m)
{
    py::class_< UBehavior_AdvanceObjectiveSet,  UBehaviorBase   >(m, "UBehavior_AdvanceObjectiveSet")
        .def_readwrite("ObjectiveSetToAdvanceTo", &UBehavior_AdvanceObjectiveSet::ObjectiveSetToAdvanceTo)
        .def("StaticClass", &UBehavior_AdvanceObjectiveSet::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AdvanceObjectiveSet::ApplyBehaviorToContext)
          ;
}