#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CauseTinnitus(py::module &m)
{
    py::class_< UBehavior_CauseTinnitus,  UBehaviorBase   >(m, "UBehavior_CauseTinnitus")
        .def_readwrite("Radius", &UBehavior_CauseTinnitus::Radius)
        .def_readwrite("StrengthModifier", &UBehavior_CauseTinnitus::StrengthModifier)
        .def_readwrite("OverrideTinnitusAkEvent", &UBehavior_CauseTinnitus::OverrideTinnitusAkEvent)
        .def("ApplyBehaviorToContext", &UBehavior_CauseTinnitus::ApplyBehaviorToContext)
          ;
}