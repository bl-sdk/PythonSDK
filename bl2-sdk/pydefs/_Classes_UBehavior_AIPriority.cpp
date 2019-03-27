#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIPriority(py::module &m)
{
    py::class_< UBehavior_AIPriority,  UBehaviorBase   >(m, "UBehavior_AIPriority")
		.def_static("StaticClass", &UBehavior_AIPriority::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PriorityModifier", &UBehavior_AIPriority::PriorityModifier)
        .def_readwrite("Target", &UBehavior_AIPriority::Target)
        .def("ApplyBehaviorToContext", &UBehavior_AIPriority::ApplyBehaviorToContext)
          ;
}