#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RandomlyRunBehaviors(py::module &m)
{
    py::class_< UBehavior_RandomlyRunBehaviors,  UBehaviorBase   >(m, "UBehavior_RandomlyRunBehaviors")
		.def_static("StaticClass", &UBehavior_RandomlyRunBehaviors::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ProbabilityContext", &UBehavior_RandomlyRunBehaviors::ProbabilityContext)
        .def_readwrite("ProbabilityLowerBound", &UBehavior_RandomlyRunBehaviors::ProbabilityLowerBound)
        .def_readwrite("ProbabilityUpperBound", &UBehavior_RandomlyRunBehaviors::ProbabilityUpperBound)
        .def_readwrite("Possibilities", &UBehavior_RandomlyRunBehaviors::Possibilities)
        .def("ApplyBehavior", &UBehavior_RandomlyRunBehaviors::ApplyBehavior)
          ;
}