#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RandomlySelectBehaviors()
{
    py::class_< UBehavior_RandomlySelectBehaviors,  UBehaviorBase   >("UBehavior_RandomlySelectBehaviors")
        .def_readwrite("Possibilities", &UBehavior_RandomlySelectBehaviors::Possibilities)
        .def_readwrite("WeightContext", &UBehavior_RandomlySelectBehaviors::WeightContext)
        .def("StaticClass", &UBehavior_RandomlySelectBehaviors::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehavior", &UBehavior_RandomlySelectBehaviors::ApplyBehavior)
        .def("SelectAndRunWeightedBehaviors", &UBehavior_RandomlySelectBehaviors::SelectAndRunWeightedBehaviors)
        .staticmethod("StaticClass")
  ;
}