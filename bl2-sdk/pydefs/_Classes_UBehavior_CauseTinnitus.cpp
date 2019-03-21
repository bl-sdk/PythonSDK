#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CauseTinnitus()
{
    py::class_< UBehavior_CauseTinnitus,  UBehaviorBase   >("UBehavior_CauseTinnitus")
        .def_readwrite("Radius", &UBehavior_CauseTinnitus::Radius)
        .def_readwrite("StrengthModifier", &UBehavior_CauseTinnitus::StrengthModifier)
        .def_readwrite("OverrideTinnitusAkEvent", &UBehavior_CauseTinnitus::OverrideTinnitusAkEvent)
        .def("StaticClass", &UBehavior_CauseTinnitus::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CauseTinnitus::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}