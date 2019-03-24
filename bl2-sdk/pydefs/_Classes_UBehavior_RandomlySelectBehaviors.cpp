#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RandomlySelectBehaviors(py::module &m)
{
    py::class_< UBehavior_RandomlySelectBehaviors,  UBehaviorBase   >(m, "UBehavior_RandomlySelectBehaviors")
		.def_static("StaticClass", &UBehavior_RandomlySelectBehaviors::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Possibilities", &UBehavior_RandomlySelectBehaviors::Possibilities)
        .def_readwrite("WeightContext", &UBehavior_RandomlySelectBehaviors::WeightContext)
        .def("ApplyBehavior", &UBehavior_RandomlySelectBehaviors::ApplyBehavior)
        .def("SelectAndRunWeightedBehaviors", &UBehavior_RandomlySelectBehaviors::SelectAndRunWeightedBehaviors)
          ;
}